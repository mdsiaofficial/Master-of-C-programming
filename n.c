#include <stdio.h>

// Define the struct for a person's details
typedef struct {
    char name[100];
    int age;
    char dept[50];
} Person;

typedef struct {
    char name[100];
    int age;
    char dept[50];
} Person1;

// Function to print person's details
void printPersonDetails(Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Department: %s\n", p.dept);
}

int main() {
    // Create a Person struct and assign values
    Person p = {"Alice", 30, "IT"};
    Person p1 = {"Ashiq", 24, "CSE", 25};

    // Call the print function with the person struct
    printPersonDetails(p1);
    // printPersonDetails(p1); // It will bring error 

    /* 
    n.c:17:32: note: expected 'Person' {aka 'struct <anonymous>'} but argument is of type 'Person1' {aka 'struct <anonymous>'}
    void printPersonDetails(Person p) {
   */

    return 0;
}
