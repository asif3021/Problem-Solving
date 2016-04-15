    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    int main()
    {
        int n,i;
        long int a[10005],m,j=0,k=0;
        while(scanf("%d",&n)==1){
                if(n<10000){
            for(i=0;i<n;i++){
                scanf("%ld",&m);
                if(m>-10000000&&m<10000000)
                    a[i]=m;
            }
            for(i=0;i<n;i++){
            if(a[i]>=10&&a[i]<=20){
                j++;
            }
            else{
                k++;
            }
            }
            printf("%d in\n%d out\n",j,k);
            j=0;
            k=0;
                }
        }
        return 0;
    }


