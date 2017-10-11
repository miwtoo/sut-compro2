#include <stdio.h>
#include <stdio_ext.h>

int main() {

  typedef struct{
    char name[21];
    float price;
    int qty;
  }orders;

  int n,i;

  do {
    printf("How many orders (1-5) : ");
    scanf("%d",&n);
  } while(n < 1 || n > 5);

  orders order[n];

  for (i = 0; i < n; i++) {
    printf("\nOrder No.%d\n",i+1);

    __fpurge(stdin);
    printf("Product Name: ");
    scanf("%s", &order[i].name);
    printf("Price: ");
    scanf("%f", &order[i].price);
    printf("Qty: ");
    scanf("%d", &order[i].qty);

  }

  printf("--------------------------------------------------\n");
  printf("%-5s%-30s%-10s%5s\n","No.","Product Name","Price","Qty" );
  printf("--------------------------------------------------\n");

  for (i = 0; i < n; i++) {
    printf("%-5d%-30s%-10.2f%5d\n",i+1,order[i].name,order[i].price,order[i].qty);
  }

  printf("--------------------------------------------------\n");

  return 0;
}
