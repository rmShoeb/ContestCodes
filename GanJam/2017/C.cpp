#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void merge(long int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    long int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(long int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int main(void)
{
    int t;
    int n,k;
    int i, j;
    long int a[1000];
    unsigned long long int m,sum;
    cin>>t;
    for(i=0;i<t;i++)
    {
        sum=0;
        cin>>n>>k;
        for(j=0;j<n;j++)
            cin>>a[j];
        cin>>m;
        mergeSort(a, 0, n-1);
        for(j=0;j<k;j++)
            sum+=a[j];
        if(sum>m)
            printf("Case %d: Shakil the great treat giver\n",i+1);
        else
            printf("Case %d: Shakil the born miser\n",i+1);
    }
}
