
#include <stdio.h>
#include <string.h>

// 1.Create a structure named employee having members: empName, age and salary. Use this structure to read the name, age and salary of the 5 employees and write entered information to
// a file employee.txt in D:\ drive.
// struct Employee {
//     char empName[50];
//     int age;
//     int salary;
// };

// int main() {
//     FILE *femp;
//     struct Employee arr[5];

//     femp = fopen("C:\\Users\\Acer\\OneDrive\\Desktop\\New folder\\nmc\\week 6\\employee.txt", "w");
//     if (femp == NULL) {
//         printf("Unable to create file\n");
//         return -1;
//     }

//     printf("Enter details of 5 employees:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Employee %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", arr[i].empName);
//         printf("Age: ");
//         scanf("%d", &arr[i].age);
//         printf("Salary: ");
//         scanf("%d", &arr[i].salary);
//     }

//     fprintf(femp, "Name\tAge\tSalary\n");
//     for (int i = 0; i < 5; i++) {
//         fprintf(femp, "%s\t%d\t%d\n", arr[i].empName, arr[i].age, arr[i].salary);
//     }

//     fclose(femp);

//     printf("The information has been written to the file successfully.\n");

//     return 0;
// }

// 2. Write a program to copy content from employee.txt. File to newemployee.txt file.
// int main(){
//     FILE *femp;
//     FILE *fnew;
//     femp = fopen("employee.txt","r");
//     if (femp == NULL){
//         printf("Unable to open the file.\n");
//     }

//     fnew = fopen("newemployee.txt","w");
//      if (fnew == NULL){
//         printf("Unable to create the file.\n");
//     }
//     char c;
//     while ((c = fgetc(femp)) != EOF) {
//         fputc(c,fnew);
//         putchar(c);
//     }
//     fclose(femp);
//     fclose(fnew);
//     printf("\nCopied the contents of employee.txt to newemployee.txt\n");
//     return 0;
// }

// 3. WAP to add new employee details in newemployee.txt file.
// struct Employee{
//     char empName[50];
//     int age;
//     int salary;
// };
// int main(){
//     FILE *fapp;
//     struct Employee arr[2];
//     fapp = fopen("newemployee.txt","a");
//     if (fapp == NULL){
//         printf("Error, file not found.\n");
//     }
//     printf("Enter details of 2 employees:\n");
//     for (int i = 0; i < 2; i++) {
//         printf("Employee %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", arr[i].empName);
//         printf("Age: ");
//         scanf("%d", &arr[i].age);
//         printf("Salary: ");
//         scanf("%d", &arr[i].salary);
//     }
//     for (int i = 0; i < 2; i++) {
//         fprintf(fapp, "%s\t%d\t%d\n", arr[i].empName, arr[i].age, arr[i].salary);
//     }
//     fclose(fapp);
//     printf("The information has been append successfully.");
//     return 0;
// }

//4.Write a program in C to read integers from the user until the user says "no".After reading the data write all odd numbers to a file named odd.txt & all even numbers to file even.txt.
// int main() {
//     FILE *fodd;
//     FILE *feven;
//
//     fodd = fopen("odd.txt", "w");
//     if (fodd == NULL) {
//         printf("Error opening odd.txt\n");
//         return -1;
//     }
//
//     feven = fopen("even.txt", "w");
//     if (feven == NULL) {
//         printf("Error opening even.txt\n");
//         fclose(fodd);
//         return -1;
//     }
//
//     int num;
//     char ans[3];
//     do {
//         printf("Enter a number (or 'no' to exit): ");
//         if (scanf("%d", &num) != 1) {
//             printf("Invalid input. Exiting.\n");
//             break;
//         }
//
//         if (num % 2 == 0) {
//             fprintf(feven, "%d\n", num);
//         } else {
//             fprintf(fodd, "%d\n", num);
//         }
//         printf("Do you want to enter another number? (yes/no): ");
//         scanf("%s", &ans);
//
//     } while (strcmp(ans, "no") != 0);
//
//     fclose(fodd);
//     fclose(feven);
//
//     printf("The numbers are written to the files successfully.\n");
//
//     return 0;
// }
//
