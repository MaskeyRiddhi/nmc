# include <stdio.h>
// Workshop Week 3a:

// 1. Write a program in C to take two numbers from the user and print the maximum between two numbers using a pointer. 
// void main(){
//     int n1, n2;
//     int *num1 = &n1;
//     int *num2 = &n2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", num1, num2);
//     if (*num1 > *num2){
//         printf("The maximun number is %d",*num1);
//     } else{
//         printf("The maximun number is %d",*num2);
//     }
// }

// 2. Write a program to count and find the sum of all the numbers in the array which are exactly divisible by 7 and not divisible by 2 and 3. 
// void main(){
//     int arr[] = {7, 5, 9, 49, 35, 8,11,12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     int count = 0;
//     for( int i=0; i< n; i++){
//         if(arr[i] % 2 !=0 && arr[i] % 3 != 0  && arr[i] %7 ==0){
//             sum = sum + arr[i];
//             count = count + 1;
//         }
//     }
//     printf("The count of all numbers which are exactly divisible by 7 and not divisible by 2 and 3: %d\n",count);
//     printf("The sum of all numbers which are exactly divisible by 7 and not divisible by 2 and 3: %d",sum);
// }

// 3. Write a program to initialize an integer array with values {10,5,7,91,54,24}. Pass this array to a function. If element is found, print out 
// its index number and if element is not found then display the message “Element Not found” in the function. 
// void main(){
//     int arr[] = {10,5,7,91,54,24};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 7;
//     search( arr, n, target);
// }
// void search(int arr[], int n, int target){
//     int i;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == target ){
//             printf("The element is found at index: %d\n", i);
//             return;
//     }
//     }
//     printf("The element is not found.");
//     }

//4. Write a program to read three integers using an array and find the smallest and largest among them.You must write a function for finding
// the largest and smallest integer and the result must be displayed in the main function itself. You are not allowed to create global variables.
// void main(){
//     int arr[3];
//     printf("Enter the three integers: ");
//     for(int i = 0; i<3; i++){
//         scanf("%d", &arr[i]);
//     }
//     int small = smallest(arr);
//     int large = largest(arr);
//     printf("The smallest integer: %d\n",small);
//     printf("The largest integer: %d",large);
// }
// int largest(int arr[]){
//     int largest = arr[0];
//     for (int i = 1; i<3;i++){
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     return largest;
// }
// int smallest(int arr[]){
//     int smallest = arr[0];
//     for (int i = 1; i<3;i++){
//         if (arr[i] < smallest) {
//             smallest = arr[i];
//         }
//     }
//     return smallest;
// }

 //5. Write a program to take three numbers from the user and save it in three different variables. You must swap the value of three numbers using
 //  function. You must use call by references.    
//  void swap(int *num1, int *num2, int *num3){
//     int temp;
//     temp = *num1;
//     *num1 = *num2;
//     *num2 = *num3;
//     *num3 = temp;
//     printf("The value of n1, n2 and n3 are: %d %d %d",*num1,*num2,*num3);

//  }
//  void main(){
//     int n1, n2, n3;
//     int *num1 = &n1;
//     int *num2 = &n2;
//     int *num3 = &n3;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", num1, num2, num3);
//     swap(num1,num2,num3);
//  }

 // Workshop Week 3b:       
// 1.Write a program in C to take three numbers from the user and print the sum, multiplication, quotient, subtraction and minimum between three 
// numbers using a pointer.   
// void main(){
//     int n1, n2, n3;
//     int *num1 = &n1;
//     int *num2 = &n2;
//     int *num3 = &n3;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", num1, num2, num3);

//     int sum = *num1 + *num2+ *num3;
//     int product = *num1 * *num2 * *num3;
//     int quotient = *num1 / *num2 / *num3;
//     int sub = *num1-*num2-*num3;

//     printf("Sum of three numbers: %d\n",sum);
//     printf("Product of three numbers: %d\n",product);
//     printf("Quotient of three numbers: %d\n",quotient);
//     printf("Subtraction of three numbers: %d\n",sub);

//     if (*num1 > *num2){
//         printf("%d is the minimum\n",*num2);
//     } else if( *num1 > *num3){
//         printf("%d is the minimum\n",*num3);
//     } else{
//         printf("%d is the minimum\n",*num1);
//     }
// }

// 2. Write a program to count and find the sum of all the numbers in the array which are exactly divisible by 5 and not divisible by 2 and 3. 
// void main(){
//     int arr[] = {7, 5, 9, 25, 35, 8,11,65};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     int count = 0;
//     for( int i=0; i< n; i++){
//         if(arr[i] % 2 !=0 && arr[i] % 3 != 0  && arr[i] %5 ==0){
//             sum = sum + arr[i];
//             count = count + 1;
//         }
//     }
//     printf("The count of all numbers which are exactly divisible by 5 and not divisible by 2 and 3: %d\n",count);
//     printf("The sum of all numbers which are exactly divisible by 5 and not divisible by 2 and 3: %d",sum);
// }

// 3. Write a program to replace each element in an array with the integer value 5. You must take input from users in the main function and save 
// it in an array. You must also take the size of an array from the user. You must create a function that takes two parameters: an array and length
// of the array. Your function should not return anything and it should not print anything. You must print before and after replacing an element 
// in an array in the main function.
void main(){
    int s;
    printf("Enter the size of an array: ");
    scanf("%d", &s);
    int arr[s];
    printf("Enter the elements of the array: ");
    for(int i=0; i<s;i++){
        
    }
}