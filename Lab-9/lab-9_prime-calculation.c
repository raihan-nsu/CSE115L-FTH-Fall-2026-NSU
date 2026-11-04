#include<stdio.h>
int main()
{
int n;
int flag = 1;
printf("Enter the number:");
scanf("%d",&n);

for(int i=2; i<=n/2; i++){
  if (n % i == 0){
    flag = 0;
    break;
  }
}
if(flag == 0){
 printf("Not a prime number");
}
else printf("Prime number");
return 0;
}

