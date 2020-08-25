#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n, t;
    char s[110];
    cin >> t;
    while(t--)
    {
        cin >> n;
        scanf(" %[^\n]", s);
        //gets(s);
        for(int i = 0 ; i < n ; ++i)
        {
            printf("%s\n", s);
            //puts(s);
        }
    }
}
