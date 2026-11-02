#include<stdio.h>

int main(){

char fruit;

printf("Enter fruit name(M,A,B,C):\n");
scanf(" %c", &fruit);

switch (fruit){
    case 'M':
        printf("The price of Mango is Tk. 500/kg");
        break;
    case 'A':
        printf("The price of Apple is Tk.250/kg");
        break;
    case 'B':
        printf("The price of Banana is Tk. 130/kg");
        break;
    case 'C':
        printf("The price of Cherry is Tk. 270/kg");
        break;
    default:
        printf("Invalid fruit name");
}
return 0;
}
