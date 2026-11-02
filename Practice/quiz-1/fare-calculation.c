#include <stdio.h>

int main()
{
    int amount, remaining;
    int n500, n100, n50, n20, n10, n5, n2, n1;
    int u500, u100, u50, u20, u10, u5, u2, u1;

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("Enter number of notes:\n");

    printf("500: ");
    scanf("%d", &n500);

    printf("100: ");
    scanf("%d", &n100);

    printf("50: ");
    scanf("%d", &n50);

    printf("20: ");
    scanf("%d", &n20);

    printf("10: ");
    scanf("%d", &n10);

    printf("5: ");
    scanf("%d", &n5);

    printf("2: ");
    scanf("%d", &n2);

    printf("1: ");
    scanf("%d", &n1);

    remaining = amount;

    u500 = remaining / 500;
    if (u500 > n500)
        u500 = n500;
    remaining = remaining - u500 * 500;

    u100 = remaining / 100;
    if (u100 > n100)
        u100 = n100;
    remaining = remaining - u100 * 100;

    u50 = remaining / 50;
    if (u50 > n50)
        u50 = n50;
    remaining = remaining - u50 * 50;

    u20 = remaining / 20;
    if (u20 > n20)
        u20 = n20;
    remaining = remaining - u20 * 20;

    u10 = remaining / 10;
    if (u10 > n10)
        u10 = n10;
    remaining = remaining - u10 * 10;

    u5 = remaining / 5;
    if (u5 > n5)
        u5 = n5;
    remaining = remaining - u5 * 5;

    u2 = remaining / 2;
    if (u2 > n2)
        u2 = n2;
    remaining = remaining - u2 * 2;

    u1 = remaining / 1;
    if (u1 > n1)
        u1 = n1;
    remaining = remaining - u1;

    if (remaining == 0)
    {
        printf("\nFarhan can pay the bill using:\n");

        printf("500: %d\n", u500);
        printf("100: %d\n", u100);
        printf("50: %d\n", u50);
        printf("20: %d\n", u20);
        printf("10: %d\n", u10);
        printf("5: %d\n", u5);
        printf("2: %d\n", u2);
        printf("1: %d\n", u1);
    }
    else
    {
        printf("\nFarhan cannot pay the bill.\n");
    }

    return 0;
}
