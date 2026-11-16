#include <stdio.h>

void square(int x)
{
    int result = pow(x, 2);
    printf("%d square = %d\n", x, result);
}

double squareroot(double x)
{
    double result = sqrt(x);

    return result;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);
    square(num);

    double sqrt = squareroot(num);

    printf("sqrt = %lf", sqrt);

    return 0;
}
