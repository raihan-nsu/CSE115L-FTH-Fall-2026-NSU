/*
Write a program that prints first n prime numbers (n is input). E.g. for n = 5 it should print: 2,3,5,7,11
*/

#include <stdio.h>

int main(){

    int p, n, count=1;

    printf("Enter value of n to print prime number from p to total n numbers: ");
    scanf(" %d %d", &p, &n);

    printf("prime numbers from %d to %d are: ", p, n);
    
    while (count<=n)
    {   int prime = 1;
        for(int i = 2; i<= p/2; i++){
            if (p%i == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1) {
        printf(" %d", p);
        count++;
        }

        p++;
    }
    return 0;
}