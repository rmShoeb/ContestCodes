#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(void)
{
    int t, i;
    ll k;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld", &k);
        ll arr[k+2];
        for(ll j= 0; j<k; j++)
            scanf("%lld", &arr[j]);
        sort(arr, arr+k);
        printf("Case %d: %lld\n", i+1, arr[0]*arr[k-1]);
    }
}
