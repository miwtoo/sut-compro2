#include <stdio.h>
#include <stdio_ext.h>

int main() {

  struct employee{
    char id[6];
    char name[21];
    char depart[21];
    float salary;
  };

  struct employee em1;

  printf("\nEmployee...\n");

  __fpurge(stdin);
  printf("ID: ");
  scanf("%s", &em1.id);
  __fpurge(stdin);
  printf("Name: ");
  scanf("%[^\n]s", &em1.name);
  __fpurge(stdin);
  printf("Department: ");
  scanf("%[^\n]s", &em1.depart);
  printf("Salaly: ");
  scanf("%f", &em1.salary);

  printf("----------------------------------------------------------------------\n");
  printf("%-10s%-25s%-25s%10s\n","ID","Name","Department","Salary" );
  printf("----------------------------------------------------------------------\n");
  printf("%-10s%-25s%-25s%10.2f\n",em1.id,em1.name,em1.depart,em1.salary);
  printf("----------------------------------------------------------------------\n");
  return 0;
}
