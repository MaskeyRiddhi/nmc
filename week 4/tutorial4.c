# include <stdio.h>

// Write a program in c to store n elements in an array and print the elements using pointer.
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
//     for (int i=0;i<n;i++){
//         printf("%d ",*p);
//         p++;
//     }
//     return 0;
// }

// write a program in c to compute the sum of all elements in an array using pointer.
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
//     printf("The of elements of an array: %d",sum);
//     return 0;
// }

// write a c program to search an element in array using pointers.
// int main(){
//     int n;
//     printf("Enter the elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n;i++){
//         printf("Enter a number: \n");
//         scanf("%d",&arr[i]);
//     }
   
//     int target;
//     for (int i=0;i<n;i++){
//       if (arr[n]== target){
//         printf("The element is found");
//     }
//     }
//     printf("The element is not found.");
//     return 0;
// }

int main(){
    int n;
    int arr[]={1,3,5,7,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int *p;
    for(int i = 0; i < len; i++){
        p = &arr[i];
        if(*p == num){
            printf("Element is found in array.");
            return 0;
        }
    }
    printf("Element not found.");
    return 0;
}