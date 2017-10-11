#include <stdio.h>
#include <stdio_ext.h>

float sum_price(float,int);

int main() {

  typedef struct{
    char name[21];
    float price;
    int qty;
  }orders;

  int n,i;
  float total = 0;

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
    printf("%-5d%-30s%-10.2f%-5d%15.2f\n",i+1,order[i].name,order[i].price,order[i].qty,sum_price(order[i].price,order[i].qty));
    total += sum_price(order[i].price,order[i].qty);
  }

  printf("-----------------------------------------------------------------\n");
  printf("%50s%15.2f\n", "Total = ",total);

  return 0;
}

float sum_price(float price, int n){
  return price*n;
}
