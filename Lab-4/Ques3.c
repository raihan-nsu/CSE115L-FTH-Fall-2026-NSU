#include <stdio.h>
#include <math.h>
 int main(){
     float side;
     float radius;
     float height;

     printf("Enter the length of one side of the cube: ");
     scanf("%f", &side);
     printf("Enter the radius of cylinder: ");
     scanf("%f", &radius);
     printf("Enter the height of the cylinder:  ");
     scanf("%f", &height);

     float volcube = pow(side,3);
     float volcyl = 3.1416*radius*radius*height;

     printf("Volume of Cube is: %.2f cubic unit\n", volcube);
     printf("Volume of Cylinder is: %.2f cubic unit", volcyl);

     return 0;
 }
