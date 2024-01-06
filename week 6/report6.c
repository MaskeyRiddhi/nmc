#include <stdio.h>
// 1. Create a structure named employee having members: empName, age and salary. Use this structure to read the name, age and salary of 3 employees and write entered information to a
// file employee.txt D:\ drive.
// struct Employee {
//     char empName[50];
//     int age;
//     int salary;
// };
// int main() {
//     FILE *femp;
//     struct Employee arr[5];
//
//     femp = fopen("C:\\Users\\Acer\\OneDrive\\Desktop\\New folder\\nmc\\week 6\\employee.txt", "w");
//     if (femp == NULL) {
//         printf("Unable to create file\n");
//         return -1;
//     }
//
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
//
//     fprintf(femp, "Name\tAge\tSalary\n");
//     for (int i = 0; i < 5; i++) {
//         fprintf(femp, "%s\t%d\t%d\n", arr[i].empName, arr[i].age, arr[i].salary);
//     }
//
//     fclose(femp);
//     printf("The information has been written to the file successfully.\n");
//     return 0;
// }

// 2. Write a program to read information from the above file employee.txt.
// int main(){
//     FILE *fr;
//     char c[100];
//     fr = fopen("employee.txt","r");
//     if (fr == NULL){
//         printf("Error, file not found");
//     } else {
//         printf("File opened successfully\n");
//         while (fgets(c, 100, fr) != NULL) {
//             printf("%s", c);
//      }
//     }
//     fclose(fr);
//     return 0;
// }

// 3. WAP to add new employee details in employee.txt file.
// struct Employee {
//     char empName[50];
//     int age;
//     int salary;
// };
//int main(){
//    FILE *fapp;
//    int n;
//    struct Employee arr[n];
//    fapp = fopen("employee.txt","a");
//    if (fapp == NULL){
//        printf("Error, file not found");
//    }
//    printf("Enter number of employees:\n");
//    scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         printf("Employee %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", arr[i].empName);
//         printf("Age: ");
//         scanf("%d", &arr[i].age);
//         printf("Salary: ");
//         scanf("%d", &arr[i].salary);
//     }
//    for (int i = 0; i < n; i++) {
//         fprintf(fapp, "%s\t%d\t%d\n", arr[i].empName, arr[i].age, arr[i].salary);
//    }
//    fclose(fapp);
//    return 0;
//}

//4.Write a program in C to read integers from the user until the user says "no". After reading the data write all the odd numbers to a file named odd.txt and all the even numbers to file even.txt.
// int main() {
//     FILE *fodd;
//     FILE *feven;
//     fodd = fopen("odd.txt", "w");
//     feven = fopen("even.txt", "w");
//     if (fodd == NULL || feven == NULL) {
//         printf("Error opening file\n");
//         return -1;
//     }
//     int num;
//     char ans[3];
//     do {
//         printf("Enter a number (or 'no' to exit): ");
//         if (scanf("%d", &num) != 1) {
//             printf("Invalid input. Exiting.\n");
//             break;
//         }
//         if (num % 2 == 0) {
//             fprintf(feven, "%d\n", num);
//         } else {
//             fprintf(fodd, "%d\n", num);
//         }
//         printf("Do you want to enter another number? (yes/no): ");
//         scanf("%s", &ans);
//     } while (strcmp(ans, "no") != 0);
//     fclose(fodd);
//     fclose(feven);
//     printf("The numbers are written to the files successfully.\n");
//     return 0;
// }

//5. Write a program to copy content from odd.txt and even.txt file to a new file numbers.txt file.
// int main() {
//     FILE *fodd, *feven, *fnum;
//     fodd = fopen("odd.txt", "r");
//     feven = fopen("even.txt", "r");
//     fnum = fopen("numbers.txt", "w");
//     if (fodd == NULL || feven == NULL || fnum == NULL) {
//         printf("Error opening files\n");
//         return -1;
//     }
//     char c;
//     while ((c = fgetc(fodd)) != EOF) {
//         fputc(c, fnum);
//     }
//
//     while ((c = fgetc(feven)) != EOF) {
//         fputc(c, fnum);
//     }
//     fclose(fodd);
//     fclose(feven);
//     fclose(fnum);
//     printf("\nCopied the contents of odd.txt and even.txt to numbers.txt\n");
//     return 0;
// }

//6. Write a c program to read integers from the user and append the sum to the end in the file name sum.txt.
 int main(){
     FILE *fsum;
     int i, n, num, sum=0;
     fsum = fopen("sum.txt","a");
     if (fsum == NULL){
         printf("Error, file not found!");
         return -1;
     }
     printf("Enter the number of integer: ");
     scanf("%d",&n);
     for (i=0; i<n;i++){
         printf("Enter a integer: ");
         scanf("%d", &num);
         sum += num;
     }
     fprintf(fsum, "The sum of %d integers is %d \n", n, sum);
     fclose(fsum);
     printf("The sum of %d integers is %d \n", n, sum);
     return 0;
 }
