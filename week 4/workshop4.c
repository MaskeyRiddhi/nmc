#include <stdio.h>
#include <stdlib.h>
// c program to create memeory for int, char, and float variables at run time

// int main() {
//     // Allocate memory for integer, character, and float
//     int* ptr_1 = (int*)malloc(sizeof(int));
//     char* ptr_2 = (char*)malloc(sizeof(char));
//     float* ptr_3 = (float*)malloc(sizeof(float));
//
//     // Input values
//     *ptr_1 = 10;
//     *ptr_2 = 'r';
//     *ptr_3 = 50.0f;
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
//     printf("\nThe value stored in float pointer is: %f", *ptr_3);
//
//     // Free allocated memory
//     free(ptr_1);
//     free(ptr_2);
//     free(ptr_3);
//
//     return 0;
// }

// finding maximum in an array using dynamic memory allocation

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
//   for (int i = 0; i < n; ++i) {
//     printf("Enter number%d: ", i + 1);
//     scanf("%d", data + i);
//   }
//
//   // Finding the largest number
//   for (int i = 1; i < n; ++i) {
//     if (*data < *(data + i)) {
//       *data = *(data + i);
//     }
//   }
//   printf("Largest number = %d", *data);
//
//   free(data);
//
//   return 0;
// }

// write a program that allocates memory space as required by the user for three arrays.User enters the numbers for two arrays and
// the program sums the corresponding array elements and stores them in the third array.

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

//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n,i, ne;

    // Get the initial size of the array from the user
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the initial array
    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Return 1 to indicate failure
    }

    // Input values for the initial array
    printf("Enter elements for the initial array:\n");
    for ( i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the initial array
    printf("Initial array elements:\n");
    for ( i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    // Get the number of new elements to add
    printf("\nEnter the number of elements to add: ");
    scanf("%d", &ne);

    // Resize the array using realloc to add more elements
    arr = (int*)realloc(arr, (n + ne) * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; // Return 1 to indicate failure
    }

    // Input values for the new elements
    printf("Enter new elements:\n");
    for ( i = n; i < n + ne; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print all elements after adding new elements
    printf("Array after adding new elements:\n");
    for (int i = 0; i < n + ne; ++i) {
        printf("%d ", arr[i]);
    }

    // Deallocate the memory
    free(arr);

    return 0; // Return 0 to indicate successful execution
}
