#include <stdio.h>

int LuckyNumber(int ,int, int);

int main() {
  int d,m,y;
  printf("What is your birthday?\n");
  printf("Day: ");
  scanf("%d", &d);
  printf("Month: ");
  scanf("%d", &m);
  printf("Year: ");
  scanf("%d", &y);
  printf("Your lucky number is: %d\n", LuckyNumber(d,m,y));
  return 0;
}

int LuckyNumber(int d, int m, int y){
  return (d+m+y)/d;
}
