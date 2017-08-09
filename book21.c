#include <stdio.h>
void printmultiple(int num, int i) {
  printf("%d x %d = %d\n", num, i, num*i );
}

int main() {
  int i;
  for (i = 1; i <= 12; i++) {
    printmultiple(2,i);
  }
  return 0;
}
