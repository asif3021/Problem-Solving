#include <stdio.h>
int main()
{
    double a,b,c,d,e;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3){
    if((a+b)>c&&(a+c)>b&&(b+c)>a){
        d=a+b+c;
        printf("Perimetro = %0.1lf\n",d);
    }
    else{
        e=((a+b)*c)/2;
        printf("Area = %0.1lf\n",e);
    }
    }
    return 0;
}
