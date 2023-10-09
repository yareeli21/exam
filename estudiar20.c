#include<stdio.h>
#include<string.h>

struct Dato{
    int campo1,campo2;
    char campo3[30];
};
void main(){
    struct Dato x;
    struct Dato *ptr;
    ptr=&x;
    (*ptr).campo1=33;
    x.campo2=55;
    (*ptr).campo1=ptr->campo2;
    strcpy((*ptr).campo3,"hola");
    printf("%d\n",x.campo2);
    printf("%d\n",x.campo1);
    printf("%s\n",ptr->campo3);
}
