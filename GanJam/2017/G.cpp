#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{
    int t,len;
    int i,j;
    char a[102];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        len=strlen(a);
        printf("1/9");
        for(j=2;j<=len;j++)
            printf("0");
        printf("\n");
    }
    return 0;
}
