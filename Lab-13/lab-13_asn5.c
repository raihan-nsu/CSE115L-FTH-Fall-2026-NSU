// 5. Write a C program using function that reads a floating point number n and an integer d and then
// prints the rounded value of n up to d decimal places. E.g. for n=5.678 and d = 2; it should print 5.68
#include<stdio.h>
#include<math.h>
float rounded(float n, int d)
{
    float res1 = (n*pow(10,n));
    float res2 = round(res1);
    float rounded = res2/pow(10,n);
    return rounded;
}

int main()
{   float n;
    int d;
     printf("Enter a float number:  ");
     scanf(" %f", &n);
     printf("Enter decimal places to round: ");
     scanf(" %d", &d);
     float result =rounded(n, d);
    printf(" %f", result);
    return 0;
}
