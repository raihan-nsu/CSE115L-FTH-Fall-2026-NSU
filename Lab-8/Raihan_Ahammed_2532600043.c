#include <stdio.h>

int main() {

int code, qnt, price;

printf("Enter item code ( 1-Sandwich, 2-Burger, 3-Pizza Slice ): ");
scanf(" %d", &code);

printf("Enter quantity: ");
scanf(" %d", &qnt);

switch (code){
  case 1:
      price = 80*qnt;
      printf("Item : Sandwich\n");
    printf("Total Price: Tk. %d\n", price);
    break;
    case 2:
      price = 120*qnt;
    printf("Item : Burger\n");
    printf("Total Price: Tk. %d\n", price);
    break;
    case 3:
      price = 150*qnt;
    printf("Item : Pizza Slice\n");
    printf("Total Price: Tk. %d\n", price);
    break;
}

if (price>300) {
    printf("Discount: Tk. 30\n");
    price -= 30;
}
else
    printf("Discount: Tk. 0\n");
    printf("Final Amount Payable: Tk. %d", price);

    return 0;
}
