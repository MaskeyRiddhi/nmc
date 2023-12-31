#include <stdio.h>
#include <stdlib.h>

// 1. Create a structure to hold any complex number x+iy. Write a program that uses the structure to
// read two complex numbers and display a third complex number.
// struct complex{
//     float real;
//     float imag;
// };
// int main(){
//     struct complex a,b,c;
//     printf("Enter real and imaginary for first compex number: ");
//     scanf("%f %f", &a.real, &a.imag);
//     printf("Enter real and imaginary for second compex number: ");
//     scanf("%f %f", &b.real, &b.imag);
//     c.real = a.real + b.real;
//     c.imag = a.imag + b.imag;
//     printf("Third complex number: %.1f %.1fi",c.real,c.imag);
// }

// 2. Write a program that uses the above structure to input two complex numbers and pass them to function, which returns the sum of entered
// complex numbers in the main function and displays the sum.
// struct complex{
//     float real;
//     float imag;
// };
// struct complex add( struct complex a, struct complex b) {
//     struct complex c;
//     c.real = a.real + b.real;
//     c.imag = a.imag + b.imag;
//     return c;
// }
// int main(){
//     struct complex a,b,c;
//     printf("Enter real and imaginary for first compex number: ");
//     scanf("%f %f", &a.real, &a.imag);
//     printf("Enter real and imaginary for second compex number: ");
//     scanf("%f %f", &b.real, &b.imag);
//     c = add(a,b);
//     printf("Third complex number: %.1f %.1fi",c.real,c.imag);
//     return 0;
// }

// 3. Create a structure named student that has a name, roll number and marks as members. Assume appropriate types and size of members. Use this
// structure to read and display records of 10 students. Create two functions: One is to read information of students and other to display the
// information.
// struct student{
//     char name[30];
//     int roll_no;
//     int marks;
// };
// void read(struct student *p){
//     printf("Enter name: ");
//     scanf("%s", &p->name);
//     printf("Enter roll_no: ");
//     scanf("%d", &p->roll_no);
//     printf("Enter the marks: ");
//     scanf("%d", &p->marks);
// }
// void display(struct student *p){
//     printf("Name: %s\n", p->name);
//     printf("Roll Number: %d\n", p->roll_no);
//     printf("Marks: %d\n", p->marks);
// }
// int main(){
//     struct student students[10];
//     for (int i = 0; i < 10; i++) {
//         printf("Enter information of student %d:\n", i + 1);
//         read(&students[i]);
//     }

//     for (int i = 0; i < 10; i++) {
//         printf("\nInformation of student %d:\n", i + 1);
//         display(&students[i]);
//     }

//     return 0;
// }

// 4. WAP to input name, post and salary of ten employees from main() function and pass to structure type user defined function(argument of this
//function should also be a structure type). This function returns a structure variable which keeps the record of only those employees whose salary
// is greater than 10,000. This modified record is also displayed from the main() function.
// struct Employees
// {
//     char name[20];
//     char post[20];
//     float salary;
// };

// //function prototype
// int filterEmployees(struct Employees employee[], struct Employees filteredEmployees[], int size);

// int main()
// {
//     struct Employees employee[10];
//     struct Employees filteredEmployees[10]; // assuming they are of the same size for simplicity

//     // prompting user to enter information for the 10 employees
//     for (int i = 0; i < 10; i++)
//     {
//         printf("\nEnter information for employee %d:\n", i + 1);
//         printf("Enter name: ");
//         scanf("%s", employee[i].name);
//         printf("Enter post: ");
//         scanf("%s", employee[i].post);
//         printf("Enter salary: ");
//         scanf("%f", &employee[i].salary);
//     }

//     //filter employees with salary greater than 10,000
//     int filteredCount = filterEmployees(employee, filteredEmployees, 10);

//     //display the filtered employees
//     printf("\nEmployees with Salary > 10,000:\n");
//     printf("%-20s%-20s%-10s\n", "Name", "Post", "Salary");
//     for (int i = 0; i < filteredCount; i++)
//     {
//         printf("%-20s%-20s%-10.2f\n", filteredEmployees[i].name, filteredEmployees[i].post, filteredEmployees[i].salary);
//     }

//     return 0;
// }

// //function to filter employees with salary greater than 10,000
// int filterEmployees(struct Employees employee[], struct Employees filteredEmployees[], int size){
//     int filteredCount = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (employee[i].salary > 10000)
//         {
//             //storing the information of employees with salary greater than 10,000
//             filteredEmployees[filteredCount] = employee[i];
//             filteredCount++;
//         }
//     } return filteredCount;
// }

#include <stdio.h>

struct Employee {
    char name[50];
    char post[50];
    float salary;
};

struct Employee filterEmployees(struct Employee employees[], int n) {
    struct Employee result[2];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 10000) {
            result[count] = employees[i];
            count++;
        }
    }

    struct Employee filteredResult;
    filteredResult.salary = count;
    for (int i = 0; i < count; i++) {
        result[i].salary = 0;
    }
    filteredResult = result[0];

    return filteredResult;
}

int main() {
    struct Employee employees[2];
    struct Employee filteredResult;

    printf("Enter details for 10 employees:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Post: ");
        scanf("%s", employees[i].post);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    filteredResult = filterEmployees(employees, 2);

    printf("\nEmployees with salary greater than 10,000:\n");
    for (int i = 0; i < filteredResult.salary; i++) {
        if (result[i].salary > 10000) {
            printf("Name: %s\n", result[i].name);
            printf("Post: %s\n", result[i].post);
            printf("Salary: %.2f\n\n", result[i].salary);
        }
    }

    return 0;
}

// 5. Write a program that asks the user for two inputs: lower limit and upper limit. Now Write a function named display that prints all the
// numbers between those limits. NOTE: You are only allowed to pass one parameter to the function and lower limit and upper limit variables should
// not be made global.in
// struct range{
//     int lower;
//     int upper;
// };
// void displayNumbers(struct range limits) {
//     printf("Numbers between %d and %d are:\n", limits.lower, limits.upper);
//     for (int i = limits.lower; i <= limits.upper; i++) {
//         printf("%d ", i);
//     }
//     printf("\n");
// }
//
// int main() {
//     struct range limits;
//
//     printf("Enter lower limit: ");
//     scanf("%d", &limits.lower);
//
//     printf("Enter upper limit: ");
//     scanf("%d", &limits.upper);
//
//     displayNumbers(limits);
//
//     return 0;
// }
//
//
