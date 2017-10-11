#include <stdio.h>
#include <stdio_ext.h>

int main() {

  struct employee{
    char id[6];
    char name[21];
    char depart[21];
    float salary;
  };
  int n,i;
  do {
    printf("How many employee (1-5): ");
    scanf("%d", &n);
  } while(n < 1 || n > 5);

  struct employee em[n];

  for (i = 0; i < n; i++) {
    printf("\nEmployee %d\n",i+1);

    __fpurge(stdin);
    printf("ID: ");
    scanf("%s", &em[i].id);
    __fpurge(stdin);
    printf("Name: ");
    scanf("%[^\n]s", &em[i].name);
    __fpurge(stdin);
    printf("Department: ");
    scanf("%[^\n]s", &em[i].depart);
    printf("Salaly: ");
    scanf("%f", &em[i].salary);

  }

  printf("----------------------------------------------------------------------\n");
  printf("%-10s%-25s%-25s%10s\n","ID","Name","Department","Salary" );
  printf("----------------------------------------------------------------------\n");

  for (i = 0; i < n; i++) {
    printf("%-10s%-25s%-25s%10.2f\n",em[i].id,em[i].name,em[i].depart,em[i].salary);
  }

  printf("----------------------------------------------------------------------\n");

  return 0;
}
