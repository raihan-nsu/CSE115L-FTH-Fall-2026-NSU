/*
1. C program to print all perfect numbers between 1 to n:

perfect number:
sum of proper divisor is equal to that number
*/

#include <stdio.h>

int main(){
    
    int n;

    printf("Enter any number to find perfect number upto that: ");
    scanf(" %d", &n);
    
    printf("from 0 to %d perfect numbers are :\n", n);
    for (int i = 1; i <=n; i++)
    {
        int sum=0;

        for (int j=1; j<=i/2; j++){
            if (i%j == 0) 
            {sum+=j;}
        }
        
        if (sum == i){
        printf(" %d", i);}
    }
    return 0;

    
}