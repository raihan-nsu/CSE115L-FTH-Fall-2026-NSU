// Write a C program that reads an integer and returns the reverse of that number using function.

#include<stdio.h>

int reverse(int n)
{  int reverse, rem;
while(n != 0)
    {
        rem = n%10;
        reverse = (reverse*10) + rem;
        n /=10;
    }
    return reverse;
}


int main()
{
    int n;

    printf("Enter an integer number: ");
    scanf(" %d", &n);

    int result = reverse(n);

    printf("Reverse number is: %d \n", result);

    return 0;
}
