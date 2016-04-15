#include <stdio.h>
int main()
{
    int m,n,i=0,j=0,k=0,a,b=0;
    while(scanf("%d%d",&m,&n)==2)
    {
        b++;
        if(m>n)
            i++;
        else if(m<n)
            j++;
        else
            k++;
        scanf("%d",&a);
    printf("Novo grenal (1-sim 2-nao)\n");
        if(a==1)
            continue;
        else if(a==2)
            break;
    }
    printf("%d grenais\n",b);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",j);
    printf("Empates:%d\n",k);
    printf("Inter venceu mais\n");
    return 0;
}

