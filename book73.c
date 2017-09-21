#include <stdio.h>

int main() {
  int a;
  do {
    printf("How many number (3-6): ");
    scanf("%d", &a);
  } while(a < 3 || a > 6);

  int n[a],*pn,i = 0;
  pn = n;
  float sum = 0,avg;
  while (i < a) {
    printf("Enter number %d (1-50):",i+1);
    scanf("%d", pn+i);
    if(*(pn+i) < 1 || *(pn+i) > 50)
      continue;
    sum = sum + *(pn+i);
    pn++;
    i++;
  }
  avg = sum / a;
  pn = &n[0];
  printf("Average = %f\n",avg);
  printf("More than Average = ");
  for (i = 0; i < a; i++) {
    if (*(pn+i) > avg)
      printf(" %d", *(pn+i));
  }
  printf("\nLess than Average = ");
  for (i = 0; i < a; i++) {
    if (*(pn+i) < avg)
      printf(" %d", *(pn+i));
  }
  printf("\nSum of all number is %.0f\n", sum);

  return 0;
}
