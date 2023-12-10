#include <stdio.h>

// 1. wap to find the largest element of an array.
//void main(){
//    int temp=0, i;
//    int arr[6] = {15,10,21,6,9,25};
//
//    for(i=1; i<6; i++){
//        if(temp<arr[i]){
//            temp=arr[i];
//        }
//    }
//    printf("Largest element in an array: %d",temp);
//}

// 2. Wap to sort array elements in ascending order.

//int main(){
//    int arr[] = {5, 12, 8, 7, 19,1};
//    int temp = 0;
//    int len = sizeof(arr)/sizeof(arr[0]);
//    printf("Elements of original array: \n");
//    for (int i = 0; i < len; i++) {
//        printf("%d ", arr[i]);
//    }
//    for (int i = 0; i < len; i++) {
//        for (int j = i+1; j < len; j++) {
//           if(arr[i] > arr[j]) {
//               temp = arr[i];
//               arr[i] = arr[j];
//               arr[j] = temp;
//           }
//        }
//    }
//    printf("\n");
//    printf("Elements of array sorted in ascending order: \n");
//    for (int i = 0; i < len; i++) {
//        printf("%d ", arr[i]);
//    }
//}

//3. wap to calculate sum and average of element of array
//int calculateSum(int arr[], int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//    }
//    return sum;
//}
//int main() {
//    int arr[10];
//    printf("Input the 10 numbers : \n");
//    for (int i = 0; i < 10; i++) {
//        printf("Number_%d :", i+1);
//        scanf("%d", &arr[i]);
//    }
//    int sum = calculateSum(arr, 10);
//    float avg = sum / 10.0;
//    printf("The sum of 10 number is : %d\nThe Average is : %f\n", sum, avg);
//    return 0;
//}

//4. wap to read two 2d array, add the elements and display the results.
//void main () {
//    int arr1[2][4] = {{1, 3, 5, 7}, {2, 4, 6, 8}};
//    int arr2[2][4] = {{0, 2, 5, 8}, {3, 1, 6, 4}};
//    int result[2][4];
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            result[i][j] = arr1[i][j] + arr2[i][j];
//        }
//    }
//    printf("The sum of the two arrays is:\n");
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            printf("%d ", result[i][j]);
//        }
//        printf("\n");
//    }
//}

//int main(){
//  int a[2][2], b[2][2], result[2][2];
//  // Taking input using nested for loop
//  printf("Enter elements of 1st array\n");
//  for (int i = 0; i < 2; ++i)
//    for (int j = 0; j < 2; ++j){
//      printf("Enter a%d%d: ", i + 1, j + 1);
//      scanf("%d", &a[i][j]);
//    }
//  // Taking input using nested for loop
//  printf("Enter elements of 2nd array\n");
//  for (int i = 0; i < 2; ++i)
//    for (int j = 0; j < 2; ++j){
//      printf("Enter b%d%d: ", i + 1, j + 1);
//      scanf("%d", &b[i][j]);
//    }
//  // adding corresponding elements of two arrays
//  for (int i = 0; i < 2; ++i)
//    for (int j = 0; j < 2; ++j){
//      result[i][j] = a[i][j] + b[i][j];
//    }
//  // Displaying the sum
//  printf("\nSum Of 2D-array: \n");
//  for (int i = 0; i < 2; ++i)
//    for (int j = 0; j < 2; ++j)
//    {
//      printf("%d ", result[i][j]);
//
//      if (j == 1)  // to change the line
//        printf("\n");
//    }
//}

// 5. wap to print all the week days
//void main(){
//    char* days[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};  // pointer is used to indicate the string is used
//    int week;
//    printf("enter the week number(1-7): ");
//    scanf("%d",&week);
//    if(week>0 && week <8){
//        printf("%s", days[week-1]);
//    } else{
//        printf("Invalid input. Please enter the number from 1 to 7.")
//}

//6.wap to swap the number using pointer
// void main(){
    int a;
    int b;
}
