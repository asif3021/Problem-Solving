#include <stdio.h>
int main()
{
    long int a,n,i,j;
    scanf("%ld",&n);
    if(n<10000){
        for(i=0;i<n;i++){
            scanf("%ld",&a);
            if(a>-10000000&&a<10000000){
                    if(a>0&&a%2==1){
                printf("ODD POSITIVE\n");
            }
            else if(a<0&&a%2==0){
                printf("EVEN NEGATIVE\n");
            }
            else if(a>0&&a%2==0){
                printf("EVEN POSITIVE\n");
            }
            else if(a==0){
                printf("NULL\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        }
        }
    }
    return 0;
}
