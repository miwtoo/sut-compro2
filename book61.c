#include <stdio.h>
int main() {
  int n[5],*np,input,i;
  np = &n[0];
  do {
    printf("How many number (2-5) : ");
    scanf("%d", &input);
    if (input < 2 || input > 5) {
      printf("!!! Invalid Number !!!\n");
    }
  } while(input < 2 || input > 5);

  for (i = 0; i < input; i++) {
    printf("n[%d] : ",i);
    scanf("%d", np+i);
  }
  for (i = 0; i < input; i++) {
    printf("The value of n[%d] is %d and address of n[%d] is %p\n",i,*(np+i),i,&n[i]);
  }
  return 0;
}
