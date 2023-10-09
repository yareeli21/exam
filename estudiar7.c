#include<stdio.h>
void main(){
    char d,*p,c;
    p=&c;
    c='a';
    d=*p;
    (*p)++;
    printf("%d,%c,%c,%c,%d\n",p,d,c,*p,&c);
}
