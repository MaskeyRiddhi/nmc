# include <stdio.h>
#include <string.h>

//1
// int main(){
//     struct Student{
//         char name[20];
//         int age;
//         char grade;
//     } arr[5]={{"Charlie",25,'B'},{"Alice",20,'A'},{"John",15,'A'},{"Joe",18,'B'},{"Manish",20,'A'}};
//     printf("Student list: \n");
//     char grd = 'A';
//     for( int i=0; i<5;i++){
//         if (arr[i].grade == grd){
//             printf("%s %d %c\n", arr[i].name,arr[i].age, arr[i].grade);
//         }
//     }
// }

//2 .Design a structure called Book with members title, author, ISBN and price.WAP to input details of 5 books froom the user and store them in an 
// array of structure.implement a function to display the details of a book given its ISBN number.

// #include <stdio.h>

// struct Book {
//     char title[50];
//     char author[50];
//     int ISBN;
//     float price;
// };

// void displayBookByISBN(struct Book books[], int n, int searchISBN) {
//     // loop through the array of books
//     for (int i = 0; i < n; i++) {
//         // check if the current book has the same ISBN as the given one
//         if (books[i].ISBN == searchISBN) {
//             // print the details of the book
//             printf("Book found: \n");
//             printf("Title: %s\n", books[i].title);
//             printf("Author: %s\n", books[i].author);
//             printf("ISBN: %d\n", books[i].ISBN);
//             printf("Price: %.2f\n", books[i].price);
//             return; // exit the function
//         }
//     }
//     // if no book is found, print a message
//     printf("No book with ISBN %d found.\n", searchISBN);
// }

// int main() {
//     struct Book books[5];
//     printf("Enter details of 5 books: \n");
//     for (int i = 0; i < 5; i++) {
//         printf("Book %d: \n", i + 1);
//         printf("Enter title: ");
//         scanf("%s", books[i].title);
//         printf("Enter author: ");
//         scanf("%s", books[i].author);
//         printf("Enter ISBN: ");
//         scanf("%d", &books[i].ISBN);
//         printf("Enter price: ");
//         scanf("%f", &books[i].price);
//     }

//     int searchISBN;
//     printf("Enter an ISBN to search for: ");
//     scanf("%d", &searchISBN);
//     displayBookByISBN(books, 5, searchISBN);

//     return 0; // Added to indicate successful program execution
// }


// 


struct Employee{
    int id;
    char name[30];
    char department[30];
    int salary

};
int main() {
    struct Employee emp[2];
    printf("Enter details of 5 employees: \n");
    for (int i = 0; i < 2; i++) {
        printf("ID %d: \n", i + 1);
        printf("Enter Name: ");
        scanf("%s", emp[i].name);
        printf("Enter department: ");
        scanf("%s", emp[i].department);
        printf("Enter Salary: ");
        scanf("%d", &emp[i].salary);
       
    }
     int maxSalaryIndex = 0;
    for (int i = 1; i < 2; i++) {
        if (emp[i].salary > emp[maxSalaryIndex].salary) {
            maxSalaryIndex = i;
        }
    }
    printf("Employee with the highest salary:\n");
    printf("Name: %s\n", emp[maxSalaryIndex].name);
    printf("Department: %s\n", emp[maxSalaryIndex].department);
    printf("Salary: %d\n", emp[maxSalaryIndex].salary);
    

    for (int i = 0; i < 2; i++) {
        if (emp[i].department == "IT") {
            emp[i].salary += 10000;
            printf("Updated salary for %s: %d\n", emp[i].name, emp[i].salary);
        }
    }
}
