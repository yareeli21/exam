#include<stdio.h>
struct package{
    int q;
};
void set_v(struct package *data,int value){
    data->q=value;
}
void main(){
    struct package p;
    p.q=10;
    set_v(&p,20);
    printf("Valor=%d\n",p.q);
}
