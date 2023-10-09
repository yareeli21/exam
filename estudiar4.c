#include<stdio.h>

void main(){

    int a,b,c,*p,*p1;
    p=&a;
    *p=5;
    p1=&b;
    *p1=2;
    p=p1;
    *p*=13;
    p1=&c;
    c=*p*8;
    printf("%d,%d,%d",a,b,c);
}
