#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)==2){
            scanf("%d",&c);
            if(a>b){
                if(a>c){
                    printf("%d eh o maior\n",a);
                }
                else{
                    printf("%d eh o maior\n",c);
                }
            }
            else if(b>c){
            printf("%d eh o maior\n",b);
            }
            else{
            printf("%d eh o maior\n",c);
            }
        }

    return 0;
}
