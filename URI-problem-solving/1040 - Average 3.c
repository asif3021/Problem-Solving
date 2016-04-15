
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,e,f,g;
    while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)==4){
        e=((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
        printf("Media: %0.1lf\n",e);
        if(e>=7){
            printf("Aluno aprovado.\n");
        }
        else if(e<5){
            printf("Aluno reprovado.\n");
        }
        else{
            printf("Aluno em exame.\n");
            scanf("%lf",&f);
            printf("Nota do exame: %.1lf\n",f);
            g=(e+f)/2;
            if(g>=5){
                printf("Aluno aprovado.\n");
            }
            else{
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %0.1lf\n",g);
        }
    }
    return 0;
}

