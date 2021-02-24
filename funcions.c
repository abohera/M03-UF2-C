#include <stdio.h>

int validacion(){
    int n;
    do{
        printf("Introduce un número: ");
        scanf("%d", &n);
    }while(n < 0);
    return n;
}

long binario(int n){
    long bin=0;
    int count=0, aux=1;
    while(n != 0){
        count = n % 2;
        bin = bin + count * aux;
        aux = aux * 10;
        n = n / 2;
    }
    return bin;
}