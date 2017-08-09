#include <stdio.h>
//#include <stdio_ext.h>

char get_input(){
  char az;
  do {
    printf("Please enter a character (a-z): ");
    //__fpurge(stdin);
    scanf(" %c", &az);
  } while(az < 'A'  || az > 'Z');
  return az;
}

void printmultiple(int num, int i) {
  printf("%d x %d = %d\n", num, i, num*i );
}

int main() {
  char az = get_input();
  int fnum = az / 10;
  int lnum = az % 10;
  int sum;
  printf("The character is '%c' and its ASCII value is %d ==> %d and %d\n", az, az, fnum, lnum);
  //sum = fnum + lnum;
  printf("Sum : %d + %d = %d\n", fnum, lnum, sum = fnum+lnum);
  printf("Multiplication table\n");
  for (int i = 1; i <= 12; i++) {
    printmultiple(sum,i);
  }
  return 0;
}
