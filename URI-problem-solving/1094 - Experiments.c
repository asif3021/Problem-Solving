#include <stdio.h>
#include <math.h>
int main()
{
    int sum,n,i=0;
    double p1,p2,c=0,f=0,r=0,p3,m,ss;
    char ch;
    while(scanf("%d",&n)==1){
        while(i<n){
                scanf("%lf %c",&m,&ch);
    if(n>=1&&m<=15){
        if(ch=='C'){
            c=c+m;
        }
        if(ch=='R'){
            r=r+m;
        }
        if(ch=='S'){
            f=f+m;
        }
        i++;
        }
        }
        sum=c+r+f;
        ss=c+r+f;
        p1=((c*100)/sum);
        p2=((r*100)/sum);
        p3=((f*100)/sum);
        printf("Total: %0.0lf cobaias\n",ss);
        printf("Total de coelhos: %0.0lf\n",c);
        printf("Total de ratos: %0.0lf\n",r);
        printf("Total de sapos: %0.0lf\n",f);
        printf("Percentual de coelhos: %0.2lf %%\n",p1);
        printf("Percentual de ratos: %0.2lf %%\n",p2);
        printf("Percentual de sapos: %0.2lf %%\n",p3);
    c=0;
    f=0;
    r=0;
    i=0;
    }
    return 0;
}
