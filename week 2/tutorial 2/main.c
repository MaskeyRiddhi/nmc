#include <stdio.h>
#include <math.h>

// 1.write a program in c to show the simple structure of a function.

// void subtract();
// void main(){
// subtract();
// }
// void subtract(){
// int x = 15;
// int y = 10;
// int sub= x-y;
// printf("%d",sub);
// }



// int cube(int n){
//     return n*n*n;
// }
// void main(){
//     int n=3;
//     printf("%d",cube(n));


// }


//2.write a program in c to find the square of any number using function.

//int square ( int y );
//
//int main ( void )
//{   int x = 10;
//      printf ( "%d ", square ( x ) ); // function call
//   }
//int square ( int y ) // y is a copy of the x sent
//{
//   return pow(y,2); // returns square of y as an int
//}

//3.write a program in c to swap two numbers using function.
//void swap(int , int); //prototype of the function
//int main()
//{  int x = 10;
//    int y = 20;
//    printf("Before swapping the values: x = %d, y = %d\n",x,y);
//    swap(x,y);
//}
//void swap (int x, int y)
//{   int change;
//    change = x;
//    x=y;
//    y=change;
//    printf("After swapping values: x = %d, y = %d\n",x,y);
//}

//4. Write a program in c to check a given number is odd or even using function.

//void test(int);
//int main (){
//    int num;
//    printf("Enter a number: ");
//    scanf("%d",&num);
//    test(num);
//    }
//void test(int num){
//    if (num%2 == 0){
//        printf("The given number is even.");
//    } else{
//        printf("The given number is odd.");
//    }
//
//    }

// 6. to convert decimal to binary number using function.
int binary(int n){
if ( n == 0){
   return  0;
}else{
    return (n % 2)+10*binary(n/2);
 }
}
int main()
{
   int n;
   printf("Enter a decimal number: ");
   scanf("%d",&n);
   printf("%d in decimal = %d in binary", n, binary(n));
}

// 7. to check whether a number is a prime number or not using function.
//int prime(int n){
//   int i;
//    for (int i= 2; i <=n/2 ; i++){
//        if (n%i!=0){
//            continue;
//        }else{
//        return 1 ;
//        }
//    }
//    return 0;
//}
//int main(){
//    int n, result=0;
//    printf("Enter a number: ");
//    scanf("%d",&n);
//    result = prime(n);
//    if (n ==1){
//        printf("%d is neither prime nor composite.");
//    } else if (result == 0){
//        printf("%d is a prime number.",n);}
//    else{
//        printf("%d is not a prime number.",n);
//    }
//}

// 8.
//int armstrg(int n){
//    int lastdigit, sum=0, num = n;
//    while (num !=0){
//        lastdigit = num % 10;
//        sum += pow(lastdigit,3);
//        num = num / 10;
//    }
//    return (n == sum);
//}
//int perfect(int n){
//    int i, sum=0;
//    for (i = 1; i < n; i++) {
//        if (n % i == 0) {
//            sum += i;
//        }
//    }
//    return (n == sum);
//}
//int main(){
//    int n;
//    printf("Enter a number: ");
//    scanf("%d",&n);
//    if( armstrg(n)){
//        printf("%d is a armstrong number.\n",n);
//    }else{
//        printf("%d is  not a armstrong number.\n",n);
//        }
//    if( perfect(n)){
//        printf("%d is a perfect number.",n);
//    }else{
//        printf("%d is  not a perfect number.",n);
//        }
//    }

// 9. anagrams
//int main(){
//    int n;
//    printf("Enter a strings: ");
//    scanf("%d",&n);
//    if( armstrg(n)){
//        printf("%d is a armstrong number.\n",n);
//    }else{
//        printf("%d is  not a armstrong number.\n",n);
//        }
//    if( perfect(n)){
//        printf("%d is a perfect number.",n);
//    }else{
//        printf("%d is  not a perfect number.",n);
//        }
//    }
