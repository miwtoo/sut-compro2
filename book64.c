#include <stdio.h>
int main() {
  int n, count = 0, size, i, j;
  char vowels[] = "aeiouAEIOU";
  size = sizeof(vowels)/sizeof(char);

  do {
    printf("How many :");
    scanf("%d", &n);
  } while(n < 4 || n > 8);

  char c[n+1],*pc;
  pc = &c[0];

  for (i = 0; i < n; i++) {
    printf("c[%d] : ",i);
    scanf(" %c", pc+i);
  }

  printf("vowels : ");
  for (i = 0; i < n; i++) {
    for (j = 0; j < size ; j++) {
      if(*(pc+i) == vowels[j]){
        printf("%c ", *(pc+i));
        count++;
      }
    }
  }
  printf("\nCount %d\n\n", count);

  printf("Conso : ");
  for (i = 0; i < n; i++) {
    for (j = 0; j < size ; j++) {
      if(*(pc+i) == vowels[j]){
        printf("%c ", *(pc+i));
        count++;
      }
    }
  }
  printf("\nCount %d\n", count);
  return 0;
}
