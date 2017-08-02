#include <stdio.h>

int main() {

  int n,delta,i,j;

  do {
    printf("Please enter number (1000-9999) : ");
    scanf("%d", &n);

    if (n < 1000 || n > 9999)
      printf("Invalid Number, Try Again!!!\n");

  } while(n<1000 || n>9999);

  delta = (((n/100) - (n%100)) > 0) ? ((n/100) - (n%100)) : ((n%100) - (n/100));

  for (i = 0; i < delta; i++) {
    printf("* ");
    for (j = 1; j < delta; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
