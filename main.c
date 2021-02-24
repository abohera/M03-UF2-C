#include <stdio.h>
#include "funcions.h"

void main(){
    int num;
    num = validacion();
    printf("El número en binario es: %ld", binario(num));
}