#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[15] ="vertebrado",ch2[15] ="ave",ch3[15] ="carnivoro",ch4[15] ="aguia",ch5[15] ="onivoro",ch6[15] ="pomba",ch7[15] ="mamifero",ch8[15] ="onivoro",ch9[15] ="homem",ch10[15] ="herbivoro",ch11[15] ="vaca";
    char ch12[15] ="invertebrado",ch13[15] ="inseto",ch14[15] ="hematofago",ch15[15] ="pulga",ch16[15] ="herbivoro",ch17[15] ="lagarta",ch18[15] ="anelideo",ch19[15] ="hematofago",ch20[15] ="sanguessuga",ch21[15] ="onivoro",ch22[15] ="minhoca";
    char t1[15],t2[15],t3[15];
    while(scanf("%s",&t1)!=EOF){
            scanf("%s",&t2);
            scanf("%s",&t3);
            if(strcmp(t1,ch1)==0){
                if(strcmp(t2,ch2)==0){
                    if(strcmp(t3,ch3)==0){
                        printf("%s\n",ch4);
                    }
                    else if(strcmp(t3,ch5)==0){
                        printf("%s\n",ch6);
                    }
                }
                else if(strcmp(t2,ch7)==0){
                    if(strcmp(t3,ch8)==0){
                        printf("%s\n",&ch9);
                    }
                    else if(strcmp(t3,ch10)==0){
                        printf("%s\n",ch11);
                    }
                }
            }
            else if(strcmp(t1,ch12)==0){
                if(strcmp(t2,ch13)==0){
                    if(strcmp(t3,ch14)==0){
                        printf("%s\n",ch15);
                    }
                    else if(strcmp(t3,ch16)==0){
                        printf("%s\n",ch17);
                    }
                }
                else if(strcmp(t2,ch18)==0){
                    if(strcmp(t3,ch19)==0){
                        printf("%s\n",ch20);
                    }
                    else if(strcmp(t3,ch21)==0){
                        printf("%s\n",ch22);
                    }
                }
            }
    }
    return 0;
}
