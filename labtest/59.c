#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

int main(){
  int n,i,j,k,check;
  char vo[] = "aeiouAEIOU";

  printf("---Part 1---\n");

  do {
    printf("How many number (2-10):");
    scanf("%d", &n);
  } while(n < 2 || n > 10);

  printf("\n---Part 2---\n");
  char str[n][20];
  int count[n];

  for (i = 0; i < n; i++) {
    printf("Name company %d:",i+1);
    __fpurge(stdin);
    scanf("%[^\n]s", str[i]);
  }

  printf("\n---Part 3---\n");
  for (i = 0; i < n; i++) {
    count[i] = 0;
    check = 0;
    printf("Company %d \"%s\": ",i+1,str[i]);
    for (j = 0; j < strlen(str[i]); j++) {
      for (k = 0; k < strlen(vo); k++) {
        if (str[i][j] == vo[k]) {
          count[i]++;
          if(count[i] == 1){
            printf("contain ");
          }
          printf("%-2c",vo[k]);
        }
      }
    }
    if (count[i] == 0) {
      printf("Not vowel!!!\n");
    } else {
      printf("to vowel %d\n",count[i]);
    }
  }
}
