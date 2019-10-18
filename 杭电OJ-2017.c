#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,result,ls,j;
    char *a[10000];
    scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            result=0;
            scanf("%c",&(a++));
            ls=strlen(a);
            for(i=1;i<=ls;i++)
            {
                if(a[i]<='9'&&a[i]>='0')
                    result=result+1;
            }
            printf("%d\n",result);
        }
    return 0;
}

