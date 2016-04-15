#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c;
    float d,e,f,s=0;;
    char ch[50];
    while((scanf("%s",&ch))!=EOF){
        scanf("%f%f",&d,&e);
        s=d+((e*15)/100);
        printf("TOTAL = R$ %.2f\n",s);
    }
    return 0;
}
