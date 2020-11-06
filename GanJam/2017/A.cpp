#include<cstdio>

int main(void)
{
    int t;
    int year;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&year);
        if(year<2020)
            printf("%d RUET may be the World Finalist\n",year);
        else
            printf("%d World Finalist RUET :)\n",year);
    }
    return 0;
}
