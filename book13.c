#include <stdio.h>

int main() {

  int n,i,j,result = 1;

  do {
    printf("Please enter number (1-10) : ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
      printf("Invalid Number, Try Again!!!\n");

  } while(n<1 || n>10);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      result = result * j;
    }
    printf("%d! = %10d\n", i,result);

    result = 1;
  }

  return 0;
}
