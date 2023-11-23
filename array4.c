#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int num[7] = {13,56,4,5,39,6,7};
    int i=1, soma=0;
    while(i < 7){
        soma += num[i];
        i++;
    }
    printf("O resultado da soma é %d\n",soma);
return 0;
}