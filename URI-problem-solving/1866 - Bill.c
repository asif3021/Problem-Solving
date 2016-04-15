#include <stdio.h>
int main()
{
    int n,sum,i=0,j;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&sum);
        if(sum>=1&&sum<=1000){
            if(sum%2==1){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        i++;
    }
    return 0;
}
