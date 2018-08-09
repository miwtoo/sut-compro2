#include <stdio.h>
int main() {
  typedef struct {
      char name[20];
      char gender;
      int age;
      float salary;
  }staff;

  staff s;
  int i = 1,e;

  FILE *fp;
  fp = fopen("mydata.dat","r");
  printf("%-5s%-20s%-10s%-10s%10s\n","No","Name","Gender","Age","Salary" );
  while (1){
    e = fread(&s,sizeof(s),1,fp);
    if(e != 1)
      break;
    printf("%-5d%-20s%-10c%-10d%10.2f\n",i++,s.name,s.gender,s.age,s.salary);
  };

  fclose(fp);
  return 0;
}
