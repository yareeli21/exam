#include<stdio.h>

void f1(int*,int);

void main(){
    int x=7,y=5;
    f1(&x,y);
    printf("%d,%d\n",x,y);
}
void f1(int *y,int x){
    *y*=12;
    x+=15;
    printf("%d,%d,%d,%d,%d\n",y,*y,&x,x,&y);
}
