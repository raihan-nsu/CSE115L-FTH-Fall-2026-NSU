#include<stdio.h>

int main(){

float num1, num2;

printf("Enter number 1: ");
scanf(" %f", &num1);
printf("Enter number 2: ");
scanf(" %f", &num2);

switch (num1>num2){
 case 1:
    printf("Number 1 = %f is maximum", num1);
    break;
 case 0:
    printf("Number 2 = %f is maximum", num2);
    break;
 default:
    printf("Error");
}
return 0;
}
