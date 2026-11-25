#include <stdio.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf(" %d", &n);

    float num[n];

    for (int i=0; i<n; i++){
        printf("Enter elements-[%d]: ", i);
        scanf(" %f", &num[i]);
    }

    printf("\n\n");
    for (int i=0; i<n; i++)
    {
        printf("element-[%d]= %f\n", i, num[i]);
    }

    float sum=0.0;
    for (int i=0; i<n; i++){
        sum += num[i];
    }

     float average= sum/n;
     printf("Average = %f\n", average);

     printf("The elements greater than average are:");
     for (int i=0; i<n; i++)
    {
        if (num[i] > average)
            printf(" %f,", num[i]);
    }

}
