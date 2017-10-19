#include <stdio.h>
int main() {
  typedef struct {
      char name[20];
      char gender;
      int age;
      float salary;
  }staff;

  staff s;

  printf("Intput Name: ");
  scanf("%s", &s.name);
  printf("Intput gender: ");
  scanf(" %c", &s.gender);
  printf("Intput age: ");
  scanf("%d", &s.age);
  printf("Intput salary: ");
  scanf("%f", &s.salary);

  FILE *fp;
  fp = fopen("mydata.dat","a");
  fwrite(&s,sizeof(s),1,fp);
  fclose(fp);
  return 0;
}
