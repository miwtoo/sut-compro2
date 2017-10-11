#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

int main(){
  int n,i,j,count,check;

  do{
    printf("How many number(4-10): ");
	scanf("%d", &n);
  }while(n < 4 || n > 10);

  char ch[n][20], last[i][15];

  for(i = 0; i < n; i++){
	  printf("String %d :",i+1);
	  __fpurge(stdin);
//--------
    //scanf("%s",&ch[i]); // จะหยุดรับตอนมี space
    //scanf("%s",&last[i]); // เพิ่มมาอีกตัวใช้ได้ แต่จะเป็นการรับสองครั้ง ซึ่งงจะเป็นการบังคับไป
//--------
    //gets(ch[i]); แบบนี้ก็ได้ แต่ในขั้นสูงไม่แนะนำเพราะ มันจะเก็บข้อมูลเดิมใว้ ส่งผลต่อความปลอดภัย
//-------
    //fgets(ch[i], 20, stdin); // หรือแบบนี้ 20 เป็นจำนวนสูงสุดที่รับ
//-------
    scanf("%[^\n]s",ch[i] );
  }



  for(i = 0; i < n; i++){
	  printf("Number %d : ",i+1);
    printf("%s\n", ch[i]);
    printf("%11sLastname = ","");

    check = 0;
    count = 0;
    for(j = 0; j < strlen(ch[i]); j++){
      if(ch[i][j] == ' '){
        check = 1;
      }
      if(check == 1 && ch[i][j] != ' '){
        printf("%c", ch[i][j]);
        count++;
      }
    }


	  printf("\n%11sCount of Charaters is %d\n","",count);
  }


  return 0;
}
