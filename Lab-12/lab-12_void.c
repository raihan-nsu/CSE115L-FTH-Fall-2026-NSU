#include <stdio.h>

void square(int x)
{
    int result = pow(x, 2);
    printf("%d square = %d", x, result);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);
    square(num);

    return 0;
}
