#include <stdio.h>
int main()
{
    double a,r,c=3.14159;
    while(scanf("%lf",&r)==1){
        a=r*r*c;
        printf("A=%.4lf\n",a);
    }
    return 0;
}
