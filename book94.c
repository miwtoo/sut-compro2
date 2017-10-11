#include <stdio.h>
#include <stdio_ext.h>

typedef struct{
  char name[21];
  float price;
  int qty;
}orders;

float sum_price(orders[],int);

int main() {



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

  printf("-----------------------------------------------------------------\n");
  printf("%-5s%-30s%-10s%-5s%15s\n","No.","Product Name","Price","Qty","Total" );
  printf("-----------------------------------------------------------------\n");

  for (i = 0; i < n; i++) {
    printf("%-5d%-30s%-10.2f%-5d%15.2f\n",i+1,order[i].name,order[i].price,order[i].qty,order[i].price*order[i].qty);
  }

  printf("-----------------------------------------------------------------\n");
  printf("%50s%15.2f\n", "Total = ",sum_price(order,n));

  return 0;
}

float sum_price(orders order[],int n){
  float sum = 0.0;
  int i;
  for (i = 0; i < n; i++) {
    sum += (order[i].price*order[i].qty);
  }
  return sum;
}
