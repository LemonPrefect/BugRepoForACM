#include<stdio.h>

int main()
{
    double f,p,w,s,d;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&p,&w,&s);
        if(s<200){
			d=0.00;
		}else if(200<=s<500){
            d=0.02;
        } else if(500<=s<1000){
            d=0.05;
        }else if(1000<=s<2000){
            d=0.08;
        }else if(2000<=s<3000){
            d=0.10;
        }else if(3000<=s){
            d=0.15;
        } 
        
        printf("%lf\n",d);
        f=p*w*s*(1-d);
        printf("%.3lf\n",f);
    }
    return 0;
}