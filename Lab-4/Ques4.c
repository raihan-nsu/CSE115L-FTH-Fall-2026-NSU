#include <stdio.h>
#include <math.h>
 int main(){
     int x, y;

     printf("Enter the value of x: ");
     scanf("%d", &x);
     printf("Enter the value of y: ");
     scanf("%d", &y);

     int quot1 = x / y;
     int rem1 = x % y;
     int quot2 = y / x;
     int rem2 = y % x;

     printf("For x/y quotent is: %d\n", quot1);
     printf("For x/y remainder is: %d\n", rem1);
     printf("For y/x quotent is: %d\n", quot2);
     printf("For y/x remainder is: %d\n", rem2);

     return 0;
 }
