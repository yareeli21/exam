#include<stdio.h>
#include<string.h>

void main(){
    char cadena[100]="abcdefghijk";
    strcpy(cadena,"uwxyz");
    strcat(cadena,"uioe");
    cadena[strlen(cadena)/2]='\0';
    cadena[strlen(cadena)-1]='*';
    printf("%s",cadena);
}
