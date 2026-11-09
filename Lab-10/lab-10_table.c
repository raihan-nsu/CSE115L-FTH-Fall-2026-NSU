#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n:");
scanf("%d",&n);
for(int j=1; j<= n; j++){


for(int i=1; i<=10; i++){
printf("%2d*%2d=%2d\n", j,i,j*i);
}
printf("\n");
}

}
