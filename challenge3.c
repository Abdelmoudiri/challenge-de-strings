#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
char x[10],y[10];
int i=0,c=0;

 printf("entrer un chaine ");
 scanf("%s",&x);
  printf("entrer une autre chaine ");
 scanf("%s",&y);


 printf(" la chaine  est : %s ",strcat(x,y));
 }
