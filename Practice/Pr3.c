#include <stdio.h>

int main(){
printf("Hello World");

float num1;
float num2;
char operator;
float result;

printf("Enter Number 1:");
scanf("%f", &num1);
printf("Enetr Number 2:");
scanf("%f", &num2);
getchar();
printf("Enter an Operator(+,-,*,/):");
scanf("%c", &operator);

switch (operator){
case '+':
    result = num1+num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    break;
case '-':
    result = num1-num2;
    printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    break;
case '*':
    result = num1*num2;
    printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    break;
case '/':
    if (num2 !=0){
    result = num1/num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    }
    else{
        printf("Error: Cannot Divided by zero");
    }
    break;
}
}
