#include<stdio.h>
int main()
// Write a C program to print all prime numbers between 1 and n in reverse order (n is an input).
 //Sample input output
{
int n;
printf("Enter 0 to n:");
scanf("%d",&n);
for (int j=2; j<=n; j++){
        int flag=1;
for(int i=2; i<=j/2; i++){
  if (j % i == 0){
    flag = 0;
    break;
  }
}
if (flag == 1){
    printf(" %d", j);
}
}
return 0;
}

