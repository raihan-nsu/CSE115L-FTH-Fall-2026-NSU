// Sum of fibonacci SA= 0+1+2+3+5+8+13....+n
// Skipped 1 after (0+1)
#include <stdio.h>

int main(){
    int n, sum=0;

    printf("Enter n:");
    scanf(" %d", &n);

    int first=0, second=1, next=2;

    for (int i=1; i<=n; i++){
        printf(" %d", first);
        sum += first;
        first = second;
        second = next;
        next = first + second;
    }
    printf("\n");
    printf("SA = %d\n", sum);

    return 0;
}
