#include <stdio.h>

int main(){
    int number;
    printf("Digite um número:\n");
    scanf("%d",&number);
    if(number > 10)
        printf("O número digitado é maior que 10");
    else
        printf("O número digitado é menor ou igual a 10\n");
return 0;
}