#include<cstdio>
#include<cstdlib>

int main(void)
{
    unsigned long int t,x,i,cnt;
    int ck;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        cnt=0;
        while(x!=0)
        {
            ck=x%10;
            x/=10;
            if(ck==4)
                cnt++;
        }
        printf("%d\n",cnt);
    }

    return 0;
}
