#include <stdio.h>

int main() {
  int n;
  do {
    printf("Enter a numbers (2-10):");
    scanf("%d", &n);
  } while(n < 2 || n > 10);

  int data[n],i,j,tmp;

  for (i = 0; i < n; i++) {
    printf("Number %d:",i+1);
    scanf("%d", &data[i]);
  }

  for (i = 0; i < n; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");


  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      if(data[i] > data[j]){
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
      }
    }
  }

  for (i = 0; i < n; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");


  return 0;
}
