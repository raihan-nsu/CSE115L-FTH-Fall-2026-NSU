#include<stdio.h>
int main()
 //Sample input output
 // summation of prime
{
int n, count;
printf("Enter 0 to n:");
scanf("%d",&n);
int sum=0;
for (int j=2; j<=n; j++){
        int flag=1;
for(int i=2; i<=j/2; i++){
  if (j % i == 0){
    flag = 0;
    break;
  }
}
if (flag == 1){
sum += j;
}
}
printf(" %d", sum);
return 0;
}

