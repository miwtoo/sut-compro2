#include <stdio.h>
int main() {

  int n,i;
  float x,sum = 0.0;

  do {
    printf("How many data? (1-10) : ");
    scanf("%d", &n);
  } while(n<1 || n>10);

  printf("Input data..\n");

  for (i = 0; i < n; i++) {
    printf("X = ");
    scanf("%f", &x);
    sum += x;
  }

  printf("Output...\n" );
  printf("Sum = %.2f\n", sum);
  printf("Average = %.2f\n", sum/n);

  return 0;
}
