#include<stdio.h>
struct fecha{
    int d,m,a;
    float x;
};
struct dato{
    char mes[30];
    struct fecha *r;
}T;

void main(){
    struct dato T;
    printf("Darle el valor de 201 a la varible float x de la estructura fecha\n");
    scanf("%f\n",&T.r->x);
    printf("%f\n",T.r->x);
}
