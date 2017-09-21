#include <stdio.h>
#include <stdio_ext.h>

int main() {
  int i,j;
  char n[5], *pn , vowel[11] = "aeiouAEIOU";
  pn = n;

  i = 0;
  while (i < 5) {
    printf("Input Data %d: ", i+1);
    __fpurge(stdin);
    scanf("%c", pn+i);
    i++;
  }

  printf("Output:");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 11; j++) {
      if (*pn == vowel[j]) {
        printf("%2c", *pn);
      }
    }
    pn++; // pn += i;
  }

  return 0;
}
