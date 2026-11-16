// 3. C program to determine if a given number is prime using function

#include<stdio.h>

int prime(int x)
{
    for(int i=2; i<=x/2; i++){
        if (x%i== 0){
            return 0;
        }
        else return 1;
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);
    int result = prime(num);
    if(result == 1){
        printf("The number %d is prime number", num);
    }
    else printf("The number %d is not a prime number", num);

    return 0;
}
