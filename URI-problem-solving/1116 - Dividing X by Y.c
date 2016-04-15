#include <stdio.h>
int main()
{
    int i,n;
    double a,b,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf%lf",&a,&b);
            if(b==0){
                printf("divisao impossivel\n");
            }
            else{
                m=a/b;
                printf("%.1lf\n",m);
            }
    }
    return 0;
}
