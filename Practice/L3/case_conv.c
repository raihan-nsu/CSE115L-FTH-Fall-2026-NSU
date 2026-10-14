#include <stdio.h>

int main() {
char a, b;
printf("Enter a lower case character: ");
scanf(" %c", &a);
printf("Enter a upper case character: ");
scanf(" %c", &b);
printf("Uppercase of %c is: %c\n", a, a-32);
printf("Lowercase of %c is: %c", b, b+32);
return 0;
}
