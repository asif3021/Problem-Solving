#include <stdio.h>
int main()
{
    int y=0,d,m=0;
    while(scanf("%d",&d)==1){
        while(d>=365){
            d=d-365;
            y++;
        }
        while(d>=30){
            d=d-30;
            m++;
        }
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
        y=0;
        m=0;
    }
    return 0;
}
