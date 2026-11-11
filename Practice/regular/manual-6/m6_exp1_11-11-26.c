/*
1. Write a C program that computes the sum of the series:
3+7+11+…+n, where n is a user input
*/

#include <stdio.h>

int main(){
    int n, i=3, sum=0;
    printf("Enter value of n for (3+7+11+...+n): ");
    scanf(" %d", &n);

    while (i<=n)
    {
        sum +=i;
        i+=4;
    }
    printf("(3+7+11+...+%d)= %d", n, sum);

    return 0;
}