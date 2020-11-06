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

        ll mat[n+2][n+2];

        //int kount[n/2 + 2];
        //memset(kount, 0, sizeof(kount));

        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                //if(i > j) {mat[i][j] = -1; continue;}
                mat[i][j] = __gcd(i, j);

            }
        }

        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                printf("%2lld |", mat[i][j]);
            }
            cout << endl;
        }

        //ll ans = -1;
        //for(int i = 1; i <= (n/2) + 1; i++){
        //    if(kount[i] >= p) ans = i;
        //}

        //printf("Case %lld: %lld\n", ++kase, ans);
    } ///eot
}


