#include <stdio.h>
#include <stdlib.h>

// 1. Write a program in C to compute the sum of all elements in an array using pointer.

// int main(){
//     int n;
//     printf("Enter the elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n;i++){
//         printf("Enter a number: \n");
//         scanf("%d",&arr[i]);
//     }
//     int *p = &arr[0];
//     int sum=0;
//     for (int i=0;i<n;i++){
//         sum +=*p;
//         p++;
//     }
//     printf("The sum of elements of an array: %d",sum);
//     return 0;
// }

// 2. Write a C program to search an element in array using pointers.
//int main() {
//    int n;
//    printf("Enter the number of elements: ");
//    scanf("%d", &n);
//
//    int arr[n];
//    for (int i = 0; i < n; i++) {
//        printf("Enter a number: \n");
//        scanf("%d", &arr[i]);
//    }
//
//    int target = 5;
//    int flag = 0; // Flag to indicate whether the element is found or not
//
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == target) {
//            flag = 1; // Set flag to 1 if the element is found
//            break;    // Exit the loop, as we found the element
//        }
//    }
//
//    if (flag == 1) {
//        printf("The element is found.\n");
//    } else {
//        printf("The element is not found.\n");
//    }
//}



// 3.c program to create memeory for int, char, and float variables at run time
// int main() {
//     // Allocate memory for integer, character, and float
//     int* ptr_1 = (int*)malloc(sizeof(int));
//     char* ptr_2 = (char*)malloc(sizeof(char));
//     float* ptr_3 = (float*)malloc(sizeof(float));
//
//     // Input values
//     *ptr_1 = 10;
//     *ptr_2 = 'r';
//     *ptr_3 = 20.07;
//
//     if (ptr_1 == NULL || ptr_2 == NULL || ptr_3 == NULL) {
//
//        printf("Memory Allocation Failed.\n");
//        return;
//     }
//
//     // Print stored values
//     printf("\nThe value stored in integer pointer is: %d", *ptr_1);
//     printf("\nThe value stored in char pointer is: %c", *ptr_2);
//     printf("\nThe value stored in float pointer is: %.2f", *ptr_3);
//
//     // Free allocated memory
//     free(ptr_1);
//     free(ptr_2);
//     free(ptr_3);
//
//     return 0;
// }


//4. Finding maximum in an array using dynamic memory allocation.
// int main() {
//
//   int n;
//   int *data;
//   printf("Enter the total number of elements: ");
//   scanf("%d", &n);
//
//   // Allocating memory for n elements
//   data = (int *)malloc(n*sizeof(int));
//   if (data == NULL) {
//     printf("Error!!! memory not allocated.");
//     return 1;
//   }
//   // Storing numbers entered by the user.
//   for (int i = 0; i < n; i++) {
//     printf("Enter number%d: ", i + 1);
//     scanf("%d", data + i);
//   }
//
//   // Finding the largest number
//   int max = *data;
//   for (int i = 1; i < n; ++i) {
//     if (max < *(data + i)) {
//       max = *(data + i);
//     }
//   }
//   printf("Largest number = %d", max);
//
//   free(data);
//
//   return 0;
// }
//

// 5.
//int main() {
//    int n, i;
//
//    // Get the size of the arrays from the user
//    printf("Enter the size of the arrays: ");
//    scanf("%d", &n);
//
//    int* arr1 = (int*)malloc(n * sizeof(int));
//    int* arr2 = (int*)malloc(n * sizeof(int));
//    int* sumArr = (int*)malloc(n * sizeof(int));
//
//    printf("Enter elements for the first array: ");
//    for (i = 0; i < n; i++) {
//        scanf("%d", arr1 + i);
//    }
//
//    printf("Enter elements for the second array: ");
//    for (i = 0; i < n; i++) {
//        scanf("%d", arr2 + i);
//    }
//
//    // Sum the arrays
//    for (i = 0; i < n; i++) {
//        *(sumArr + i) = *(arr1 + i) + *(arr2 + i);
//    }
//
//    // Print the sum array
//    printf("The sum of the two arrays is: ");
//    for (i = 0; i < n; i++) {
//        printf("%d ", *(sumArr + i));
//    }
//
//    // Deallocate the memory
//    free(arr1);
//    free(arr2);
//    free(sumArr);
//
//    return 0;
//}

//6.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int *arr;
//    int len, length;
//    printf("Enter the initial size of the array: ");
//    scanf("%d", &len);
//    arr = (int *)malloc(len * sizeof(int));
//    printf("Enter elements for the array:\n");
//    for (int i = 0; i < len; i++) {
//        printf("Element %d: ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//
//    printf("Initial array:\n");
//    for (int i = 0; i < len; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\nEnter the number of elements to add: ");
//    scanf("%d", &length);
//    arr = (int *)realloc(arr, (len + length) * sizeof(int));
//
//    printf("Enter additional elements for the array:\n");
//    for (int i = len; i < len + length; i++) {
//        printf("Element %d: ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//    printf("Updated array:\n");
//    for (int i = 0; i < len + length; i++) {
//        printf("%d ", arr[i]);
//    }
//    free(arr);
//}

//#include <stdio.h>
////Structure declartion
//struct employee {   //Structure declartion
//    char name[40];
//    int empid;
//    int experience;
//}emp;
//void displaydetails(struct employee*);  //function declaration
//int main()
//{
//struct employee *empptr;   //pointer declaration
//empptr = &emp;   //initial
//printf("Enter the name of the Employee : ");
//scanf("%s", empptr->name);
//printf("Enter the Employee Id : ");
//scanf("%d",&empptr->empid);
//printf("Enter Experience of the Employee : ");
//scanf("%d",&empptr->experience);
//displaydetails(empptr);
//return 0;
//}
////Function Definition
//void displaydetails(struct employee *empptr)
//{
//printf("\n---------Details List--------- \n ");
//printf("\nEmployee Name : %s",empptr->name);
//printf("\nEmployee ID : %d ",empptr->empid);
//printf("\nEmployee Experience : %d ",empptr->experience);
//}

//#include <stdio.h>
//// Structure declaration
//struct Sum {
//    int a, b;
//};
//
//// Function definition
//void add(struct Sum s) {
//    // Calculate the sum of two values
//    int sum1 = s.a + s.b;
//
//    // Display the result
//    printf("The sum of two values is: %d\n", sum1);
//}
//int main() {
//    // Declare a variable of type struct Sum
//    struct Sum s1;
//
//    // Get user input
//    printf("Enter the value of a: ");
//    scanf("%d", &s1.a);
//
//    printf("Enter the value of b: ");
//    scanf("%d", &s1.b);
//
//    // Call the function and pass the structure as an argument
//    add(s1);
//
//    return 0;
//}
