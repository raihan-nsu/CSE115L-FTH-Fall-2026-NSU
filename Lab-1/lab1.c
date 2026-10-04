#include <stdio.h>
#include <stdlib.h>

int main(){
printf("\t\"North South Umiversity\"\n");
printf("Hello there how are you\n");

int num;
float deci;
char name[20];

printf("Enter a integer Number: ");
scanf("%d", &num);
printf("Enter a decimal Number: ");
scanf(" %f", &deci);
printf("Enter your Name: ");
scanf(" %s", &name);
printf("The integer number is: %d\n", num);
printf("The decimal number is: %.2f\n", deci);
printf("Your name is: %s\n", name);

return 0;
}
