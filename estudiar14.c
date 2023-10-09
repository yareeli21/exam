#include<stdio.h>

#define N 3

void main(){
    int m[N][N]={{1,2,3},{6,5,4},{9,8,7}};
    int x,y;

    for(x=1;x<N;x++)
        for(y=0;y<N;y++)
            if((*(*(m+x)+y))%2==0)
                (*(*(m+x)+y))+=(*(*(m+(x-1))+y));

    for(x=0;x<N;x++){
        for(y=0;y<N;y++)
            printf("%d",*(*(m+x)+y));
            printf("\n");

    }
}
