#include<stdlib.h>
#include<stdio.h>
int main(){
char x[10];
int i=0,c=0;

 printf("entrer un chaine ");
 scanf("%s",&x);
 while(x[i]!='\0')
 {
    c++;

    i++;
 }

 printf(" la taille est : %d ",c);
 }
