#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    long long int t,i,j,k,len,cnt,ck;
    char s[1000000];
    scanf("%lld",&t);
    scanf("%s",s);
    len=strlen(s);
    cnt=0;
    ck=0;
    for(i=1;i<=len;i++)
    {
        for(j=0;i+j<=len;j++)
        {
            cnt=0;
            for(k=j;k<j+i;k++)
            {
                if(s[k]=='1')
                    cnt++;
                if(cnt>t)
                    break;
            }
            if(cnt==t)
                ck++;
        }
    }
    printf("%lld\n",ck);
    return 0;
}
