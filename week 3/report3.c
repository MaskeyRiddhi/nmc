#include <stdio.h>

// 1. wap to find the largest element of an array.
// void main(){
//     int temp=0, i;
//     int arr[6] = {15,10,21,6,9,25};

//     for(i=1; i<6; i++){
//         if(temp<arr[i]){
//             temp=arr[i];
//         }
//     }
//     printf("Largest element in an array: %d",temp);
// }

// 2. Write a program to check whether two given strings are an anagram.

//define function and declaring variable that takes two character parameter
int anagram(char a[], char b[]){
	//default value assigned to zero
    int num1[26] = {0}, num2[26] = {0}, i = 0;
 //while statement is used to sort both the array
    while (a[i] != '\0'){
        num1[a[i] - 'a']++;
        i++;
    }
    i = 0;
    while (b[i] != '\0'){
        num2[b[i] -'a']++;
        i++;
    }
    //comparing both the array using for loop
    //if both string are equal than they are anagrams otherwise they are not anagrams
    for (i = 0; i < 26; i++){
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}
int main(){//main function
	char a[100], b[100];//declaring two string variable where they are stored in an array, where the array will allow you to store 100 characters from index 0 to 99
    int flag;//declaring variable flag to store two string entered by the user

    printf("Enter the first string: \n");//asking user to enter first string i.e. a
    scanf("%s",&a);//user input to enter a first string i.e. a
    printf("Enter the second string: \n");//asking user to enter second string i.e. b
    scanf("%s",&b);//user input to enter a second string i.e b
    flag = anagram(a, b);
    if (flag == 1)
        printf("%s and %s are anagrams.\n", a, b);//displays if the entered strings are anagrams
    else
        printf("%s and %s are not anagrams.\n", a, b);//displays if the entered strings are not anagrams
	return 0;
}

// 3. Write a program to print all unique elements in an array. For example,a[ ] ={1,2,4,8,4,2,4,9,6} answer : 1,2,4,8,9,6.
// void uniqueElement(int arr[], int size) {
//     int i, j;
//     for (i = 0; i < size; i++) {
//         for (j = 0; j < i; j++)
//             if (arr[i] == arr[j])
//                 break;
//         if (i == j)
//             printf("%d ", arr[i]);
//     }
// }
//
// int main() {
//     int a[] = {1, 2, 4, 8, 4, 2, 4, 9, 7,6};
//     int size = sizeof(a) / sizeof(a[0]);
//     printf("Unique elements in the array is: ");
//     uniqueElement(a, size);
//     return 0;
// }


// 4. Write a program to sort an array elements in ascending order.
// int main(){
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
// }

//5. Write a program to count and find the sum of all the numbers in the array which are exactly divisible by 5 and not divisible by 2 and 3.
// void main(){
//     int arr[] = {7, 5, 9, 25, 35, 8,11,65};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     int count = 0;
//     for( int i=0; i< n; i++){
//         if(arr[i] % 2 !=0 && arr[i] % 3 != 0  && arr[i] % 5 ==0){
//             sum = sum + arr[i];
//             count = count + 1;
//         }
//     }
//     printf("The count of all numbers which are exactly divisible by 5 and not divisible by 2 and 3: %d\n",count);
//     printf("The sum of all numbers which are exactly divisible by 5 and not divisible by 2 and 3: %d",sum);
// }

// 6. WAP reads two 2-D arrays, adds the corresponding elements and displays the result on the screen.
//void main () {
//   int arr1[2][4] = {{1, 3, 5, 7}, {2, 4, 6, 8}};
//   int arr2[2][4] = {{0, 2, 5, 8}, {3, 1, 6, 4}};
//   int result[2][4];
//   for (int i = 0; i < 2; ++i) {
//       for (int j = 0; j < 4; ++j) {
//           result[i][j] = arr1[i][j] + arr2[i][j];
//       }
//   }
//   printf("The sum of the two arrays is:\n");
//   for (int i = 0; i < 2; ++i) {
//       for (int j = 0; j < 4; ++j) {
//           printf("%d ", result[i][j]);
//       }
//       printf("\n");
//   }
//}
