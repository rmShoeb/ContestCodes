#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long int

#define mod 1000000000000000+37

ll bigpow(ll b, ll p){
  if(p == 0) return 1;
  if(p == 1) return b;
  ll mid = p / 2, ret1, ret2;
  if(p & 1){
    ret1 = bigpow(b, mid);
    ret2 = bigpow(b, mid+1);
    return (((ret1 % mod) * (ret2 % mod)) % mod);
  }
  else{
    ret1 = bigpow(b, mid);
    return (((ret1 % mod) * (ret1 % mod)) % mod);
  }
}

/*ll bigpow(ll b, ll p){
    if(p == 0) return 1 % mod;
    int ret = bigpow(b, p/2);
    ret = (ret*ret) % mod;
    if(p % 2 == 1) ret = (ret*b) % mod;
    return ret;
}*/

int main(){
    ll test, kase = 0, a, b, c, p2, p3, p4;
    scanf("%lld", &test);

    while(test--){
        scanf("%lld %lld %lld", &a, &b, &c );
        cout << "ooooo" << '\n';
        p2 = c;
        p3 = 0; //bigpow(b, p2);
        //cout << "p3 = " << p3 << endl;
        //printf("p3 = %lld\n", p3 );
        p4 = 0; //bigpow(a, p3);
        //cout << "p4 = " << p4 << endl;

        printf("Case %lld: %lld\n", ++kase, p4 );
    }
}
