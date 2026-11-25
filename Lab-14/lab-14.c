#include <stdio.h>

int main()
{
    int n=5,m=5,p=5,cse[n],eee[m],sum[p];

    for (int i=0; i<n; i++){
        printf("Enter cse[%d]: ", i);
        scanf(" %d", &cse[i]);
    }

    for (int i=0; i<m; i++){
        printf("Enter eee[%d]: ", i);
        scanf(" %d", &eee[i]);
    }

    printf("\n\n");
    for (int i=0; i<n; i++)
    {
        printf("cse[%d]= %d\n", i, cse[i]);
    }

    printf("\n\n");
     for (int i=0; i<m; i++)
    {
        printf("eee[%d]= %d\n", i, eee[i]);
    }

    int i=0;
    while (i<p){
        sum[i]=cse[i]+eee[i];
        i++;
    }


    printf("\n\n");
     for (int i=0; i<p; i++)
    {
        printf("cse[%d]+eee[%d]= sum[%d]= %d\n", i, i, i, sum[i]);
    }


}
