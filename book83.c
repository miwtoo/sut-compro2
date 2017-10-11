#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

int main() {
  int n,i,j,count = 0;
  do {
    printf("How many of names (2-5):");
    scanf("%d", &n);
  } while(n < 2 || n > 5);

  char str[n][9],sort[n][9],buff[9],key;

  for (i = 0; i < n; i++) {
    printf("Enter name %d:",i+1);
    __fpurge(stdin);
    scanf("%s", &str[i]);
    strcpy(sort[i],str[i]);
  }

  for (i = 0; i < n; i++) {
    for (j = i+1; j < n; j++) {
      if(sort[i][0] > sort[j][0]){
        strcpy(buff,sort[i]);
        strcpy(sort[i],sort[j]);
        strcpy(sort[j],buff);
      }
    }
  }
  printf("---------------------------------------------------\n");
  printf("%-25s%-20s\n","Original names","Sorted names");
  printf("---------------------------------------------------\n");
  for (i = 0; i < n; i++) {
    printf("%-25s%-20s\n",str[i],sort[i]);
  }
  printf("---------------------------------------------------\n");

  printf("Search a name start with: ");
  __fpurge(stdin);
  scanf("%c", &key);

  for (i = 0; i < n; i++) {
    if(key == sort[i][0]){
      printf("%s\n", sort[i]);
      count++;
    }
  }
  printf("Total found = %d\n", count);
  return 0;
}
