#include <stdio.h>

//1. Create a structure named student that has a name, roll number and marks as members. Assume appropriate types and size of members. Use this
//structure to read & display records of 10 students.Create two functions:One is to read information of students & other to display the information.
//struct student{
//    char name[30];
//    int roll_no;
//    int marks;
//};
//void read(struct student *p){
//    printf("Enter name: ");
//    scanf("%s", &p->name);
//    printf("Enter roll_no: ");
//    scanf("%d", &p->roll_no);
//    printf("Enter the marks: ");
//    scanf("%d", &p->marks);
//}
//void display(struct student *p){
//    printf("Name: %s\n", p->name);
//    printf("Roll Number: %d\n", p->roll_no);
//    printf("Marks: %d\n", p->marks);
//}
//int main(){
//    struct student students[10];
//    for (int i = 0; i < 2; i++) {
//        printf("Enter information of student %d:\n", i + 1);
//        read(&students[i]);
//    }
//
//    for (int i = 0; i < 2; i++) {
//        printf("\nInformation of student %d:\n", i + 1);
//        display(&students[i]);
//    }
//}

//2.WAP to input name, post and salary of ten employees from main () function and pass to structure type user defined function (argument of this
//function should also be a structure type). This function returns a structure variable which keeps the record of only those employees whose salary
// is greater than 10,000. This modified record is also displayed from the main () function.
//struct Employees {
//    char name[20];
//    char post[20];
//    float salary;
//};
//
//// Function to filter employees with a salary greater than 10,000
//int filterEmployees(struct Employees emp[], struct Employees employee[], int size) {
//    int count = 0;
//    for (int i = 0; i < size; i++) {
//        if (emp[i].salary > 10000) {
//            // Storing the information of employees with salary greater than 10,000
//            employee[count] = emp[i];
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    struct Employees emp[2];
//    struct Employees employee[2]; // Assuming they are of the same size for simplicity
//
//    // Prompting the user to enter information for 2 employees
//    for (int i = 0; i < 2; i++) {
//        printf("\nEnter information for employee %d:\n", i + 1);
//        printf("Enter name: ");
//        scanf("%s", emp[i].name);
//        printf("Enter post: ");
//        scanf("%s", emp[i].post);
//        printf("Enter salary: ");
//        scanf("%f", &emp[i].salary);
//    }
//
//    // Filter employees with a salary greater than 10,000
//    int count = filterEmployees(emp, employee, 2);
//
//    // Display the filtered employees
//    printf("\nEmployees with Salary > 10,000:\n");
//    for (int i = 0; i < count; i++) {
//        printf("%s \n%s\n %.2f\n", employee[i].name, employee[i].post, employee[i].salary);
//    }
//
//    return 0;
//}


//3.Write a program that asks the user for two inputs: lower limit & upper limit.Now write a function named display that prints all the numbers
//between those limits.NOTE:You are only allowed to pass one parameter to the function and lower limit and upper limit variables should not be made global.in
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

// 4.Create a structure name Student and inside that struct include two data members'roll no and marks, inside that struct student definition create another struct
// named student_info where you should include three data members' name, age, and date of birth and print it out for 3 students.
//struct student_info{
//    char name[50];
//    int age;
//    char dob[];
//};
//struct Student{
//    int roll_no;
//    int marks;
//    struct student_info info;
//};
//
//int main (){
//    struct Student std[3];
//    for (int i = 0; i < 3; i++) {
//        printf("Details of student%d:\n", i + 1);
//        printf("Roll No: ");
//        scanf("%d", &std[i].roll_no);
//        printf("Marks: ");
//        scanf("%d", &std[i].marks);
//        printf("Name: ");
//        scanf("%s", std[i].info.name);
//        printf("Age: ");
//        scanf("%d", &std[i].info.age);
//        printf("Date of Birth: ");
//        scanf("%s", std[i].info.dob);
//    }
//    // Print information for each student
//    for (int i = 0; i < 3; i++) {
//        printf("\nDetails of students:\n");
//        printf("Roll No: %d\n", std[i].roll_no);
//        printf("Marks: %d\n", std[i].marks);
//        printf("Name: %s\n", std[i].info.name);
//        printf("Age: %d\n", std[i].info.age);
//        printf("Date of Birth: %s\n", std[i].info.dob);
//    }
//}

// 5.Write a structure to store the names, salary and hours of work per day of 5 employees in a company. Write a program to increase the salary depending on
//the number of hours of work per day as follows and then print the name of all the employees along with their final salaries.
//Hours of work per day  8   10  >=12
//Increase in salary    $50 $100 $150

//struct Employees {
//    char name[20];
//    float salary;
//    int hours;
//};
//
//int main(){
//    struct Employees employee[3];
//
//     prompting user to enter information for the 5 employees
//    for (int i = 0; i < 3; i++)
//    {
//        printf("\nEnter information for employee %d:\n", i + 1);
//        printf("Enter name: ");
//        scanf("%s", employee[i].name);
//        printf("Enter hours of work per day: ");
//        scanf("%d", &employee[i].hours);
//        printf("Enter salary: ");
//        scanf("%f", &employee[i].salary);
//    }
//
//    for (int i = 0;i < 3; i++ ){
//        if(employee->hours==8){
//            employee->salary += 50;
//        }else if (employee->hours==10){
//            employee->salary += 100;
//        }else if (employee->hours>=12){
//            employee->salary += 150;
//        }
//    }
//    for (int i = 0;i < 3; i++ ){
//        printf("Employee name: %s\nFinal Salary: %.2f\n", employee[i].name, employee[i].salary);
//    }
//}

#include <stdio.h>

struct Employees {
    char name[20];
    float salary;
    int hours;
};

int main() {
    struct Employees employee[3];

    // Prompting the user to enter information for 3 employees
    for (int i = 0; i < 3; i++) {
        printf("\nEnter information for employee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", employee[i].name);
        printf("Enter hours of work per day: ");
        scanf("%d", &employee[i].hours);
        printf("Enter salary: ");
        scanf("%f", &employee[i].salary);
    }

    // Adjusting salary based on hours of work per day
    for (int i = 0; i < 3; i++) {
        if (employee[i].hours == 8) {
            employee[i].salary += 50;
        } else if (employee[i].hours == 10) {
            employee[i].salary += 100;
        } else if (employee[i].hours >= 12) {
            employee[i].salary += 150;
        }
    }

    // Printing the final details
    for (int i = 0; i < 3; i++) {
        printf("Employee name: %s\nFinal Salary: %.2f\n", employee[i].name, employee[i].salary);
    }

    return 0;
}

// 6. Create a structure named Employee having members name, salary and hours of work per day. Now, write a program to dynamically create an ‘n’ number of
////structures of type Employee. Pass this array of structure to a function that prints the highest salary of the employee.

//struct Employee {
//    char name[30];
//    float salary;
//    int hours;
//};
//// Define the function that prints the highest salary of an array of employees
//void highest_salary(struct Employee *arr, int n) {
//    // Declare a variable to store the index of the employee with the highest salary
//    int index = 0;
//
//    // Loop through the array of employees and find the index of the employee with the highest salary
//    for (int i = 1; i < n; i++) {
//        if (arr[i].salary > arr[index].salary) {
//            index = i;
//        }
//    }
//
//    // Print the name and salary of the employee with the highest salary
//    printf("The employee with the highest salary is %s, with a salary of %.2f.\n", arr[index].name, arr[index].salary);
//}
//int main() {
//    // Declare a pointer to store the array of employees
//    struct Employee *emp;
//
//    // Declare a variable to store the number of employees
//    int n;
//
//    // Ask the user to enter the number of employees
//    printf("Enter the number of employees: ");
//    scanf("%d", &n);
//
//    // Dynamically allocate memory for the array of employees
//    emp = (struct Employee *)malloc(n * sizeof(struct Employee));
//
//    // Check if the memory allocation was successful
//    if (emp == NULL) {
//        printf("Memory allocation failed.\n");
//        return 1;
//    }
//
//    // Ask the user to enter the details of each employee
//    for (int i = 0; i < n; i++) {
//        printf("Enter name of employee %d: ", i + 1);
//        scanf("%s", emp[i].name);
//        printf("Enter salary: ");
//        scanf("%f", &emp[i].salary);
//        printf("Enter hours of work per day of employee : ");
//        scanf("%d", &emp[i].hours);
//    }
//
//    // Pass the array of employees to the function that prints the highest salary
//    highest_salary(emp, n);
//
//    // Free the memory allocated for the array of employees
//    free(emp);
//
//    return 0;
//}
