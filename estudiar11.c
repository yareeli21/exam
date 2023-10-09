#include<stdio.h>

void main(){
    int array[8]={2,4,7,23,-5,2,78,27};
    int valor;
    valor=*(array+4);
    printf("%d",valor);
}
