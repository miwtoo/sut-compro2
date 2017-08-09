#include <stdio.h>
//#include <stdio_ext.h>

char input(){
  char az;
  do {
    printf("Please enter a character (a-z): ");
    //__fpurge(stdin);
    scanf(" %c", &az);
  } while(az < 'a'  || az > 'z');
  return az;
}

int main() {
  char az = input();
  for (int i = 0; i < 4; i++) {
    if(i % 2 == 0)
      printf("%c ", az);
    else
      printf("%c ", az - 32);
  }
  return 0;
}
