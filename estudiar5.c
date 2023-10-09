#include<stdio.h>

void fun2(int *s,int n);

void main(){
    int m=4,n=11;
    fun2(&m,n);
    printf("%d,%d\n",m,n);
}

void fun2(int *s,int n){
    *s=73;
    n=85;
}
