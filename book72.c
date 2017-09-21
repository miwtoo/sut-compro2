#include <stdio.h>

void display(int*);

int main() {
  int n[5], i;

  i = 0;
  while (i < 5) {
    printf("Enter number%d (65-90): ", i+1);
    scanf("%d", &n[i]);
    if (n[i] < 65 || n[i] > 90) {
      printf("Invalid number, try again...\n");
      continue;
    }

    i++;
  }

  display(&n);
  return 0;
}

void display(int *pn){
  int i;
  float sum = 0;
  printf("Output:");
  for (i = 5; i >= 0; i--) {
    printf("%-2c", *(pn+i));
    sum = sum + *(pn+i);
  }
  printf("\nAverage: %.2f\n", sum/5);
}
