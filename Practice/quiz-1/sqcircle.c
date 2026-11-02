#include <stdio.h>
#include <math.h>

int main()
{
    float r, a, d;
 printf("eneter one side of square: ");
 scanf(" %f", &a);
 printf("eneter radius of circle: ");
 scanf(" %f", &r);

 d = sqrt(2) * a;

 if (d <= (2*r)){
 printf("can be fitted");

 }
 else{
 printf("no");
 }


    return 0;
}
