#include <stdio.h>

struct Person
{
  char name[50];
  int age;
  char dept[50];
};

void printPersonDetails(){
  

  printf("Name: %s\nAge: %d\nDepartment: %s\n", p1.name, p1.age, p1.dept);

}
int main(){
  struct Person p1;
  printf("Enter name: ");
  scanf("%s", &p1.name);
  printf("Enter age: ");
  scanf("%d", &p1.age);
  printf("Enter department: ");
  scanf("%s", &p1.dept);
  printPersonDetails();
}