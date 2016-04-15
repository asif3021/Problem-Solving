#include <stdio.h>
int main()
{
    int a,b,i,o,num[50000],m=0,j,p;
    while(scanf("%d%d",&a,&b)==2){
            if(b>a){
        for(i=a+1;i<b;i++){
                o=i%5;
        if(o==2||o==3){
            num[m]=i;
        m++;
        }
        }
            }
            else{
        for(i=b+1;i<a;i++){
                o=i%5;
        if(o==2||o==3){
            num[m]=i;
        m++;
        }
        }
            }
    for (i = 0; i < m; i++){
        for (j = i + 1; j < m; j++){
            if (num[i] > num[j]){
                p =  num[i];
                num[i] = num[j];
                num[j] = p;
                }
            }
        }

        for (i = 0; i < m; ++i){
            printf("%d\n", num[i]);
            }
            m=0;
    }
    return 0;
}
