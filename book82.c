#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

int check_upper(char str[31],int len){
  int i;
  for (i = 0; i < len; i++) {
    if(str[i] >= 'A' && str[i] <= 'Z')
      return 0;
  }
  return 1;
}

int main() {
  char str[30],tmp;
  int i,j,len;

  do {
    printf("Enter a string: " );
    __fpurge(stdin)
    scanf("%s", str);
    len = strlen(str);
  } while(!check_upper(str,len));

  for (i = 0; i < len; i++) {
    for (j = i; j < len; j++) {
      if(str[i] > str[j]){
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
      }
    }
  }

  printf("Output sorting a string: %s\n", str);

  return 0;
}
