#include <stdio.h>
int main()
{
    float n,i=2,s=1,r;
    for(n=3;n<=39;n++){
            r=n;
        s=s+(r/i);
    i=i*2;
    n++;
    }
    printf("%.2f\n",s);
    return 0;
}
