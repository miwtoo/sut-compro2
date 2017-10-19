#include <stdio.h>
#include <ctype.h>
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
    fp = fopen("mydata.txt","a");
    fprintf(fp, "%-20s%-5c%-10d%-.2f\n",s.name,toupper(s.gender) ,s.age,s.salary);
    fclose(fp);

  return 0;
}
