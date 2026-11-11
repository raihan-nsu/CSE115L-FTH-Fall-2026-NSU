// Write a C program to print hollow rhombus star pattern of N lines. E.g. for N=5 print:
#include<stdio.h>

int main(){
    int n;
    printf("rombus pattern for n ");
    scanf(" %d", &n);
    for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                printf(" ");
            }
        for (int j=1; j<=n; j++){
            if (i==1 || i==n || j==1 || j==n ){
            printf("*");
            }
             else printf(" ");
        }
        printf("\n");
    }
    return 0;
}

