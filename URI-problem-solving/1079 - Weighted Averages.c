#include <stdio.h>
int main()
{
    int n,i;
    float a,b,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f%f%f",&a,&b,&c);
        d=(a*0.20)+(b*0.30)+(c*0.50);

        printf("%0.1f\n",d);
    }
    return 0;
}
