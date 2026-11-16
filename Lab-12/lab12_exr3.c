// 1. Write a C program using 3 functions to compute diameter, circumference and area of a circle whose
// radius is given by the user as the input.

#include<stdio.h>
#include<math.h>

void diameter(float r)
{
    float result = 2*r;
    printf("Diameter = %.2f\n", result);
}

float circumference(float r)
{
    float result = 2*M_PI*r;
    return result;
}

void area(float r)
{
    float result = M_PI*pow(r,2);
    printf("Area = %.2f\n", result);
}

int main()
{
    float r;
    printf("Enter radius: ");
    scanf(" %f", &r);
    diameter(r);
    float cirmf = circumference(r);
    printf("Circumference = %.2f\n", cirmf);
    area(r);

    return 0;
}
