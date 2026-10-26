#include <stdio.h>

int main(){

    float num1;
    float num2;
    float result;
    char operator;
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);
    getchar();
    printf("Enter operator(+, -, *, /, %%): ");
    scanf("%c", &operator);

    switch (operator){
    case '+':
        result = num1 + num2;
        printf("%f + %f is = %f", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("%f - %f is = %f", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%f * %f is = %f", num1, num2, result);
        break;

    case '/':
        if (num2 == 0){
        printf("Cannot be divided with zero");
        }
        else {
        result = num1 / num2;
        printf(" %f / %f is = %f", num1, num2, result);
        }
        break;

    case '%':
        result = (int)num1 % (int)num2;
        printf("%f %% %f is = %f", num1, num2, result);
        break;
    default:
        printf("Invalid operation or number");
    }
}
