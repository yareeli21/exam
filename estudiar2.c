#include<stdio.h>
int M(int x);
void main(){

    int a,b,c;
    a=c=8;
    b=M(c);
    c=a+b;
    b=M(c);
    printf("%i,%i,%i",a,b,c);
}

int M(int x){
    int y=3;
    --x;
    x%=2;
    x*=8;
    return x*y;
}
