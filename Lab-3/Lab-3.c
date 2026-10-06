#include <stdio.h>
#include <math.h>

int main(){
printf("Hello World\n");

/* int num1;
int power;

printf("Enter the Number:");
scanf("%d", &num1);
printf("Enter power:");
scanf("%d", &power);
int result = pow(num1, power);
float result2 = sqrt(num1);
printf("%d power %d is equal to: %d\nand square root of %d is: %f\n", num1, power, result, num1, result2);
*/
/*
float x;
printf("Enter value of x:");
scanf("%f", &x);

float cube = pow(x,3);
float sqr = pow(x,2);
float squrt = sqrt(x);
float result3 = 5*cube - 4*sqr + squrt + 3;

printf("The result is: %f", result3);
*/
/*
int num2;

printf("Enter a number:");
scanf("%d", &num2);

float last_digit = num2%10;
float other_digit = num2/10;
printf("The last digit of %d is: %f\nand other digits are: %f", num2, last_digit, other_digit);
*/

int date;

printf("Enter a date:");
scanf("%d", &date);

float days = date%7;
float week = date/7;
printf("%d is equal to : %f week and %f days", date, week, days);

}
