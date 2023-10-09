#include<stdio.h>

int Proceso(int b,int *a){
    *a=*a+b;
    b*=5;
    printf("%d,%d,%d,%d\n",b,a,&b,*a);
    return b;
}
void main(void){
    int a=7,b=105;
    printf("%d,%d\n",a,b);
    a=Proceso(a,&b);
    printf("%d,%d\n",a,b);

}
