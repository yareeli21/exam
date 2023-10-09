#include<stdio.h>

void main(){
int num1[20]={88,30,40,0,90,60,58,10,23};
int i,j;
for(j=0;j<7;)
    scanf("%d",&num1[j++]);
    i=0,j=1;
while((j<6)&&(num1[j-1])<num1[j]){
    i++,j++;
}
    for(int k=-1;k<j+2;)
        printf("%d\n",num1[++k]);
}
