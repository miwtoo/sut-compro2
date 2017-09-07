#include <stdio.h>

int main() {
  int x[5], *pn, n, i;
  pn = &x[0];

  do {
    printf("Input Integer Number (1-99): ");
    scanf("%d", &n);
  } while(n < 1 || n > 100);

  printf("\n\nOutput : ");
  for (i = 0; i < 5; i++) {
    x[i] = n * (i+1);

    printf("%d ",*(pn+i));
  }

  return 0;
}
