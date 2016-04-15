#include <stdio.h>
int main()
{
    float a,b,c,d;
    while(scanf("%f%f",&a,&b)==2){
            scanf("%f",&c);
            if(a>=0&&a<=10&&b>=0&&b<=10&&c>=0&&c<=10){
    d=((a*2)+(b*3)+(c*5))/10;
    printf("MEDIA = %.1f\n",d);
            }
    }
    return 0;
}
