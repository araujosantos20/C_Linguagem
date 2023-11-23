#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int dec=0, rest=0, result=0, mult=1;

    printf("Digite um número decimal\n");
    scanf("%d",&dec);

    while(dec > 0){

        rest = dec % 2;
        dec = dec / 2;
        result = result + rest * mult;
        mult = mult * 10;


    }
    printf("O número decimal convertido é %d\n",result);
    return 0;


}