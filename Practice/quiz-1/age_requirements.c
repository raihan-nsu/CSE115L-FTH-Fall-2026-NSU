#include <stdio.h>

int main(){
int age;
    printf("Enter your age: ");
    scanf(" %d", &age);

     if ( age >= 25 && age <= 45)
    {
       printf("you are eligible");
    }
    else
    {
        printf(" You are too young or too old ");
    }

return 0;
}
