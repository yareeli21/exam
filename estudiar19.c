#include<stdio.h>

struct data{
    int *ptr;
    int num;
}a;

void main(){
    a.ptr=&(a.num);
    *(a.ptr)=10;

    printf("%d",a.num);
}
