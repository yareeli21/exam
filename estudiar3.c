#include<stdio.h>

void main(){

    int i,j;
    int *p;
    p=&i;
    *p=9;
    j=(*p)++;
    printf("%d,%d\n",i,j-3);

}
