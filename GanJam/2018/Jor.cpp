#include <bits/stdc++.h>
using namespace std;

#define gg 9.81
#define ll long long int

ll dp[1100][1100];

ll maxnum, n;

ll given[1100], manipulated[1100];

ll explore(ll index, ll taken){
    /*if(taken == maxnum) return 0;
    if(index == n) return 0;

    ll ret1 = manipulated[index] + explore(index+1,taken+manipulated[index]);
    ll ret2 = explore(index+1, taken);
    return max(ret1, ret2);*/
    if(dp[index][taken] != -1) return dp[index][taken];

    if(taken > maxnum) return 0;
    if(index == n && taken <= maxnum) return taken;
    if(index == n) return 0;

    ll ret1, ret2;
    if(taken+manipulated[index] <= maxnum){
      ret1 = explore(index+1, taken+manipulated[index]);
    }
    else ret1 = 0;
    ret2 = explore(index+1, taken);

    return dp[index][taken] = max(ret1, ret2);
}

int main(){
  ll test, kase = 0;
  scanf("%lld", &test);

  while(test--){
    memset(dp, -1, sizeof (dp));

    scanf("%lld %lld", &maxnum, &n );

    for(ll i = 0; i < n; i++){
      scanf("%lld", &given[i] );

      double temp = (2*given[i]*given[i]*1.00) / gg;
      manipulated[i] = (ll) ceil(temp);
      //if(manipulated[i] * gg != given[i]) manipulated[i]++;
    }

    ll ans = explore(0, 0);

    printf("Case %lld: %lld\n", ++kase, ans );
  }
}
