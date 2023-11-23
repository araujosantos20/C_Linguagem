#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int number, cont;

    printf("Digite um número\n");
    scanf("%d",&number);

    for(cont = 0;cont <= 10; cont++){
        printf("%d x %d = %d\n",number,cont,number*cont);
    }

return 0;
}