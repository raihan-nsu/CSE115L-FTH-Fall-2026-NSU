#include <stdio.h>
#include <math.h>
 int main(){
     float tempc;


     printf("Enter the temperature in: ");
     scanf("%f", &tempc);

     float tempf = tempc*9/5+32;

     printf("the temperature in Farenheit is: %.2f degree farenheight", tempf);

     return 0;
 }
