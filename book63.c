#include <stdio.h>

int main() {
  int odd[] = {1,3,5,7,9}, *podd, even[] = {2,4,6,8,10}, *peven, i;
  podd = &odd[0];
  peven = &even[4];

  printf("Output : Array_odd x Array_even\n");

  for (i = 0; i < 5; i++)
    printf("Round %d : %d x %d = %d\n", i, *(podd+i), *(peven-i), *(podd+i) * *(peven-i));

  return 0;
}
