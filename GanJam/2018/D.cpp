#include<iostream>
#include<cstdio>
#include<cstring>
#define ll unsigned long long
#define mod 1000000000000037

using namespace std;

ll bigMod(ll n, ll c)
{
    if(c == 1)
    {
        return n % mod;
    }
    ll x = bigMod(n, c / 2) % mod;
    x = ((x % mod)*(x % mod)) % mod;
    if(c % 2 == 1)
    {
        x = (x * n) % mod;
    }
    return x;
}

int main(){
  ll test, kase = 0, a, b, c;
  scanf("%lld", &test );
  while(test--){
    scanf("%lld %lld %lld", &a, &b, &c );
    ll ans1 = bigMod(b, c);
    ll ans2 = bigMod(a, ans1);
    printf("Case %lld: %lld\n", ++kase, ans2 );
  }
}
