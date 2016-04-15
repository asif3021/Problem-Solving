#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,n,m;
    while(scanf("%d",&m)==1){

        if(m==1){
            a++;
        }
        else if(m==2){
            b++;
        }
        else if(m==3){
            c++;
        }
        else if(m==4){
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);
    return 0;
}
