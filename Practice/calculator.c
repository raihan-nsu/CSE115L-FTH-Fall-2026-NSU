#include <stdio.h>

int main(){
printf("Hello World\n");

float num1;
float num2;
char operator;
float result;

printf("Enter Number 1:");
scanf(" %f", &num1);
printf("Enter an Operator(+,-,*,/,%%):");
scanf(" %c", &operator);
printf("Enter Number 2:");
scanf(" %f", &num2);

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
case '%':
    if ((int)num2 != 0) {
        result = (int)num1 % (int)num2;
        printf("%.2f %% %.2f = %.0f\n", num1, num2, result);
    } else {
        printf("Error: Modulo by zero is not allowed.\n");
    }
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
