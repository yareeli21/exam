#include<stdio.h>
#define N 10
void main(){
    int v[N]={100,90,80,70,60,50,40,30,20,10};
    int *ptr;
    int x=1;
    ptr=v;

    while(x<N){
        if(*(ptr+x)%30==0)
            *(ptr+x)=0;
        x++;
    }
    for(x=N-1;x>0;x--){
        if(*(ptr+x)==0)
            *(ptr+x)=*(ptr+(x+1));
        printf("%d\n",*(ptr+x));
    }

}
