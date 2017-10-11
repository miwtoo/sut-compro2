#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

int main(){
  int n,i,j,min;

  do {
    printf("Enter number(even number and 2-8):");
    scanf("%d", &n);
    if ((n < 2 || n > 8) || (n % 2 != 0)) {
      printf("Not value want..\n");
    }
  } while((n < 2 || n > 8) || (n % 2 != 0));

  //----------------------------------------------
  char str[n][20],str_tmp[n][20],tmp[20];
  int sort[n];

  for (i = 0; i < n; i++) {
    printf("Enter String[%d]:", i);
    scanf("%s", &str[i]);
    strcpy(str_tmp[i],str[i]);
  }

  //----------------------------------------------

  for(i = 0; i < n; i++){
    min = strlen(str_tmp[i]);
    for (j = i; j < n; j++) {
      if(min > strlen(str_tmp[j])){
        min = strlen(str_tmp[j]);

        strcpy(tmp,str_tmp[i]);
        strcpy(str_tmp[i],str_tmp[j]);
        strcpy(str_tmp[j],tmp);
      }
    }
    sort[i] = min;
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < count ; j++) {
      /* code */
    }
  }

}
