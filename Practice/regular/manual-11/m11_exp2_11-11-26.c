/*
C program to print all prime numbers between 1 and n.
*/

#include <stdio.h>

int main(){
    
    int n;

    printf ("any number to print prime number upto that:");
    scanf(" %d", &n);
    printf ("prime number from 1 to %d :\n", n);
    
    for (int i = 2; i <= n; i++)
    {   
        int flag = 1;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j == 0){
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            printf(" %d", i);
        }

    }
return 0;    

}