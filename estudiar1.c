#include<stdio.h>

void main(){
 int x=5, y=2, z;
 int *p1,*p2,*p3;
 p1=&x;
 p2=&y;
 z=*p1 * *p2;
 p3=&z;
 (*p3)++;
 printf("%d,%d,%d,%d",*p1,&p2,*p3,p3);
 printf("Direccion de p2:%d, direccion de z:%d",&p2,p3);

}
