#include <stdio.h>

float triangle(int base, int height){
  return 0.5*base*height;
}

int main() {
  int a,b;
  printf("Enter base: ");
  scanf("%d", &a);
  printf("Enter height: ");
  scanf("%d", &b);
  printf("Area = %.2f\n", triangle(a,b));
  return 0;
}
