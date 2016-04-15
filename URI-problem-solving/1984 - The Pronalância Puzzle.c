
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[10];
    int i,j,k,n;
    while(scanf("%s",&a)==1)
    {
        n=strlen(a);
        n--;
        for(i=n;i>=0;i--){
            printf("%c",a[i]);
        }
        printf("\n");

    }
    return 0;
}

