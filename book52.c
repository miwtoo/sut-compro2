#include <stdio.h>
#include <string.h>
#include <ctype.h>

void update(char ch[]){
  int i = 0;
  while (i < strlen(ch)) {
    if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'){
      ch[i] = toupper(ch[i]);
    else
    i++;
    ch[i] = '+';
  }
  printf("Output :%s\n", ch);
}

int main(int argc, char const *argv[]) {
  char ch[11];

  printf("Enter a string (4-10) : " );
  scanf("%s", ch);

  update(ch);

  return 0;
}
