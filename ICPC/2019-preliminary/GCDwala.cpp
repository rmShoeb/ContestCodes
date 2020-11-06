#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(void)
{
    ll test, kase = 0;
    scanf("%lld", &test);

    while(test--){
        ll n, p;
        scanf("%lld %lld", &n, &p );

        //ll mat[n+2][n+2];

        int kount[n/2 + 2];
        memset(kount, 0, sizeof(kount));

        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                if(i > j) {continue;}
                else {ll temp = __gcd(i, j);
                    kount[temp]++;}
            }
        }

         ans = -1;
        for(int i = 1; i <= (n/2) + 1; i++){
            if(kount[i] >= p) ans = i;
        }

        printf("Case %lld: %lld\n", ++kase, ans);
    } ///eot
}

