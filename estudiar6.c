#include<stdio.h>
int Modi(int y,int *x);
void main(){
    int x=3,y=7;
    x=Modi(x,&y); //en la segunda variable se le está pasando la dirección de memoria de y para que esta pueda ser modificada
    printf("%d,%d\n",x,y);
}
int Modi(int y,int*x){
    y+=100;
    *x*=10;
    printf("%d,%d,%d,%d\n",y,x,&x,*x);
    return *x;
}
