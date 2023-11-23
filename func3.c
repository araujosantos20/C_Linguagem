#include <stdlib.h>
#include "mat.h"

int main(){
    system("clear");
    int num[10] = {15,5,6,9,16,24,33,71,22,10};
    printf("A soma dos valores é %d\n",soma(num,10));
    printf("O maior valor é %d\n",max(num,10));
    return 0;
};