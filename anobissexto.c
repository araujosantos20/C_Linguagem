#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;
    system("clear");
    //system("clear") para limpar a tela de comandos
    printf("Digite um ano e lhe diremos se tem um dia a mais ou não\n");
    scanf("%d",&year);
    if (year % 4 == 0)
        printf("O ano %d tem 366 dias, ano bissexto\n",year);
    else
        printf("O ano %d tem 365 dias, ano comum\n",year);

return 0;

}