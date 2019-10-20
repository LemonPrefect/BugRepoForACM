#include<stdio.h>
#include<string.h>
int main()
{
    int x[60][60],i,j,k,a,b,n;
    while(scanf("%d %d %d",&a,&b,&n)!=EOF)
    {
        if(a==0&&b==0&&n==0) return 0;
        if(a==7&&b==7&&n>=3)
        {
            printf("0\n");
            continue;
        }
        memset(x,0,sizeof(x));
        x[1][1]=1,j=1,k=1;
        int s[60];
        s[1]=1,s[2]=1;
        for(i=3;i<=51;i++)
        {
            s[i]=((a*k)+(b*j))%7;
            if(x[k][s[i]]!=0) break;
            x[k][s[i]]=1,j=k,k=s[i];
        }
        s[0]=s[i-2];
        for(j=1;j<i;j++)
        {
            if(s[j]==k&&s[j+1]==s[i]) break;
        }
        if(n>=j)
        printf("%d\n",s[j+(n-j)%(i-1-j)]);
        else printf("%d\n",s[n]);
    }
}