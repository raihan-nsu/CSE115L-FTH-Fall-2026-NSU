#include <stdio.h>

int main(){

    float num1 = 45.4564;
    int num2 = 5;
    int num3 = 15;
    float sum = num1+num2+num3;
    float sub = num1-num2-num3;
    float mul = num1*num2;
    float div = num3/num2;
    float rem = num1/num2;
    float avg = sum/3;
    float inp1;
    float inp2;
    float inp3;

    printf ("Sum of three numbers: %f\n", sum);
    printf ("Subtraction of three numbers: %f\n", sub);
    printf ("Multiplication of three numbers: %f\n", mul);
    printf ("Divition of two numbers: %f\n", div);
    printf ("Remainder of num1 and num2 numbers: %f\n", rem);
    printf ("Average of three numbers: %f\n\n\n", avg);

    printf("Enter the Number 1: ");
    scanf("%f", &inp1);
    printf("Enter the Number 2: ");
    scanf("%f", &inp2);
    printf("Enter the Number 3: ");
    scanf("%f", &inp3);
    float sumi = inp1+inp2+inp3;
    float avgi = sumi/3;

    printf("Sum of three numbers: %f\n", sumi);
    printf("Average of three numbers: %f\n", avgi);

    printf("Hello\n\n\n");

    float R;

    printf("Enter the radius of the circle: ");
    scanf("%f", &R);

    float p = 3.1416;
    float D = 2*R;
    float C = 2*p*R;
    float A = p*R*R;

    printf("Diameter is: %f\n", D);
    printf("Circumfurance is: %f\n", C);
    printf("Area is: %f\n", A);

}
