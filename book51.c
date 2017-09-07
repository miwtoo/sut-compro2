#include <stdio.h>

void countNegative(int data[]) {
  printf("Output :");
  int i = 0,count=0;
  while (i < 9) {
    if(data[i] < 0){
      printf(" %d", data[i]);
      count++;
    }
    i++;
  }
  printf("\nCount = %d\n",count );
}

void sumPositive(int data[]) {
  printf("Output :");
  int i = 0,sum=0;
  while (i < 9) {
    if(data[i] > 0){
      printf(" %d", data[i]);
      sum += data[i];
    }
    i++;
  }
  printf("\nSum = %d\n",sum );
}

int main() {

  int n[] = {2,3,-1,0,-5,9,30,-45,-3};
  printf("From function countNegative.\n");
  countNegative(n);
  printf("From function sumPositive.\n");
  sumPositive(n);
  return 0;
}
