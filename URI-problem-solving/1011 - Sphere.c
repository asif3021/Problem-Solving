#include <stdio.h>
int main()
{
    int a,b;
    double c=3.14159,s;
    while(scanf("%d",&a)==1){
        s=(c*a*a*a*4)/3;
        printf("VOLUME = %.3f\n",s);
    }

    return 0;
}
