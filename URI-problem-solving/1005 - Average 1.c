#include <stdio.h>
int main()
{
    float a,b,c;
    while(scanf("%f%f",&a,&b)==2){
            if(a>=0&&a<=10&&b>=0&&b<=10){
    c=((a*3.5)+(b*7.5))/11;
    printf("MEDIA = %.5f\n",c);
            }
    }
    return 0;
}
