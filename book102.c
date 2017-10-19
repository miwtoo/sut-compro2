#include <stdio.h>
int main() {
  FILE *fp;
  char name[20];
  char gender;
  int age;
  float salary;
  int s, i =1;
  fp = fopen("mydata.txt","r");
  printf("%-5s%-20s%-10s%-10s%10s\n","No","Name","Gender","Age","Salary" );
  do {
    s = fscanf(fp,"%s %c %d %f",name,&gender,&age,&salary);
    printf("%-5d%-20s%-10c%-10d%10.2f\n",i++,name,gender,age,salary);
  }while (s == 4);

  fclose(fp);
  return 0;
}
