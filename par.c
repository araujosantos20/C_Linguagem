#include <stdio.h>
#include <stdlib.h> //comando clrscr para limpar a tela

int main(){
    //vamos usar o comando system("/bin/clear") para
    //limpar a tela antes de executar os demais comandos
    int number;
    printf("Digite um número e lhe diremos se é par ou impar\n");
    scanf("%d",&number);
    if (number % 2 == 0)
        printf("O número %d é par \n",number);
    else
        printf("O número %d é impar\n",number);

return 0;
    
}