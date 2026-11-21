// 5. Write a C program using function that reads a floating point number n and an integer d and then
// prints the rounded value of n up to d decimal places. E.g. for n=5.678 and d = 2; it should print 5.68
#include<stdio.h>
#include<math.h>

int div(int n, int d)
{
    int result = n / (int)pow(10,d);

    return result;
}

int rem(int n, int d)
{
    int result = n % (int)pow(10,d);

    return result;
}

double rounding(double n, int d)
{
    double result;
    result = n * (int)pow(10,d);
    result = round(result);

    return result;
}

int main()
{   double n;
    int d;

    printf("Enter a float number:  ");
    scanf(" %lf", &n);

    printf("Enter decimal places to round: ");
    scanf(" %d", &d);

    int rounded = rounding(n, d);
    int whole = div(rounded, d);
    int decimal = rem(rounded, d);

    printf("The rounded number to %d decimal point = %d.%d", d, whole, decimal);

    return 0;
}
