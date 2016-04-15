#include <stdio.h>
int main()
{
    int m=0,h=0,s;
    while(scanf("%d",&s)==1){
        while(s>=60){
            s=s-60;
            m++;
        }
        while(m>=60){
            m=m-60;
            h++;
        }
        printf("%d:%d:%d\n",h,m,s);
        m=0;
        h=0;
    }
    return 0;
}
