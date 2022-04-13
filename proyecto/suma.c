#include<stdio.h>
#include<stdlib.h>




void datos(){

printf("----------------------------\n");
printf("| 1.-SUMA          2.-RESTA  |\n");
printf("|         3.-SALIR           |\n");
printf(" ----------------------------|\n");




}




int main(){

int a,b;

datos();

system("clear");
printf("PROGRAMA QUE REALIZA SUMAS CON 2 DIJITOS\n");
printf("Dame un numero?:");
scanf("%d",&a);

printf("Dame otro numero?:");
scanf("%d",&b);



printf(" :) yes el resultado de la suma es: %d",a+b);



return 0;
}


