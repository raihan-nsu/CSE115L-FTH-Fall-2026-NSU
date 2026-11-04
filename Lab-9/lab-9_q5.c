// Write a C program to print the multiplication table (নামতা) of any given integer number.
// Sample input/output (bold ones are inputs):
#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n:");
scanf("%d",&n);

for(int i=1; i<=10; i++){
printf("%2d*%2d=%2d\n", n,i,n*i);
}
}
