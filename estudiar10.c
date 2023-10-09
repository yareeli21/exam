#include<stdio.h>
void A(int n2,int *n1){
    *n1+=100;
    n2*=100;
    printf("%d,%d,%d,%d\n",n1,n2,&n2,*n1);
}
void main(){
    int n1=3;
    int n2=15;
    A(n1,&n2);
    printf("%d,%d\n",n1,n2);

}
