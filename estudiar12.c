#include<stdio.h>

void main(){
    int mat[4][2]={{11,12},{21,22},{31,32},{41,42}};
    int v=mat[2][1];
    int p;
    printf("%d\n",v);

   p=*(*(mat+3)+1)=*(*(mat+1)+0)+mat[2][1];
    printf("%d\n",*(*(mat+3)+1));
}
