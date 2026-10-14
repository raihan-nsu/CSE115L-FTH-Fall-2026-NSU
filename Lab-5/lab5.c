#include <stdio.h>
// Determine whether the number is ood or even
int main(){
    printf("Hello World\n");


    // Even Odd Check

    int num1;
    printf("Enter a Number: ");
    scanf("%d", &num1);
    /*
    if (condition){if condition is true enters the block, either goes to next
    }
    */

    if ( num1 % 2 == 0){
        printf("The number %d is even\n", num1);
    }
    else {
            // condition works for 'if' only
        printf("The number %d is odd\n", num1);
    }


    // Leap year check

    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year%400 == 0) || (year%4 == 0 && year%100 !=0)){
    printf("The year %d is leap year\n", year);
    }
    else{
        printf("The year %d is not leap year\n", year);
    }


    // Maximum Nummber check

    float num2, num3, num4;
    printf("Enter Number 1: ");
    scanf("%f", &num2);
    printf("Enter Number 2: ");
    scanf("%f", &num3);
    printf("Enter Number 3: ");
    scanf("%f", &num4);

    if (num2 > num3 && num2 > num4){
        printf("Number %f is maximum", num2);
    }
    else if (num3 > num2 && num3 > num4) {
        printf("Number %f is maximum", num3);
    }
    else {
        printf("Number %f is maximum", num4);
    }

    return 0;
}
