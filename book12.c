#include <stdio.h>

int main() {

  int n,i,count = 0,sum = 0;

  do {
    printf("Please enter number (10-99) : ");
    scanf("%d", &n);

    if (n < 10 || n > 99)
      printf("Error!!! %d is invalid input.\n", n);

  } while(n<10 || n>99);

  printf("Output =");
  for (i = n; i > 0; i-=2) {
    printf(" %d ", i);
    sum += i;
    count++;
  }
  printf("\nCount = %d\n", count);
  printf("Sum = %d\n", sum);

  return 0;
}
