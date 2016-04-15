#include <stdio.h>
#include <math.h>
int main()
{
    int n=0,j,i=0,sum=0,a[100],x,z;
    scanf("%d",&x);
    scanf("%d",&z);
    while(x>=z){
        scanf("%d",&z);
    }
    while(sum<z){
            sum=sum+x;
    x++;
        n++;
    }
    printf("%d\n",n);
    return 0;
}

