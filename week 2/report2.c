
#include<stdio.h>
#include <math.h>

// 1. Function to calculate the cube of a number
// int cube(int n) {
//     return n * n * n;
// }
// // Main function
// void main() {
//     // Declare and initialize a variable 'n' with the value 3
//     int n = 3;
//     // Print the result of the cube function for the value of 'n'
//     printf("The cube of  is  %d is %d",n, cube(n));
// }

// 2. Write a program in C to swap two numbers using function.
    // int swap(int n1, int n2){
    //     int temp;
    //     temp = n1;
    //     n1 = n2;
    //     n2 = temp;
    //     printf("After swaping the values in function: n1=%d , n2=%d\n",n1,n2);
    // }
    // void main(){
    //     int n1 = 4, n2 = 6; 
    //     printf("Before swaping the values: n1=%d , n2=%d\n",n1,n2);
    //     swap(n1,n2);
    //     printf("After swaping the values in main: n1=%d , n2=%d\n",n1,n2);
    // }

// 3. Write a void function which finds and prints the midpoint coordinates of a line. The function should take in four 
// parameters (x1, y1, x2 and y2). xmid=(x1+x2)/2, ymid=(y1+y2)/2
    // int midpoint(int x1,int x2, int y1, int y2){
    //     int xmid = (x1 + x2) / 2;
    //     int ymid = (y1 + y2) / 2;
    // }
    // void main(){
    // int x1=5, x2=10;
    // int y1=15, y2=20;
    // int xmid, ymid;
    // midpoint(x1, x2, y1, y2 );
    // printf("The midpoint coordinates of a line is: (%d ,%d)",xmid,ymid);
    // }

// 4. Write a program in C to check Armstrong and perfect numbers using the function.
    // int armstrg(int n){
    //     int lastdigit, sum=0, num = n;
    //     while (num !=0){
    //     lastdigit = num % 10;
    //         sum += pow(lastdigit,3);
    //         num = num / 10;
    //     }
    //     return (n == sum);
    // }
    // int perfect(int n){
    //     int i, sum=0;
    //     for (i = 1; i < n; i++) {
    //         if (n % i == 0) {
    //             sum += i;
    //         }
    //     }
    //     return (n == sum);
    // }
    // int main(){
    //     int n;
    //     printf("Enter a number: ");
    //     scanf("%d",&n);
    //     if( armstrg(n)){
    //         printf("%d is a armstrong number.\n",n);
    //     }else{
    //         printf("%d is  not a armstrong number.\n",n);
    //         }
    //     if( perfect(n)){
    //         printf("%d is a perfect number.",n);
    //     }else{
    //         printf("%d is  not a perfect number.",n);
    //         }
    // }

// 5. Write a function named “velocityCalc” which returns an appropriate value for the formula “v=u+at”, where v is the final velocity,
// u is the initial velocity, a is the acceleration and t is the time that has elapsed. Depending upon which variable is set to “NAN” when the
// function is called, your function should work it out and return the value.
    // float velocityCalc(float u, float a, float t, float v) {
    //     if (isnan(v)) { // when final velocity is unknown
    //         v = u + a * t;
    //         return v;
    //     } else if (isnan(u)) {  // when initial velocity is unknown
    //         u = v - a * t;
    //         return u;
    //     } else if (isnan(a)) {  // when acceleration is unknown
    //         a = (v - u) / t;
    //         return a;
    //     } else {                 // when time is unknown
    //         t = (v - u) / a;
    //         return t;
    //     }
    // }
    // void main(){
    //     float w = velocityCalc(NAN, 5.6, 7.8, 6.8);
    //     float x = velocityCalc(5.2,NAN,4.5,4.6);
    //     float y = velocityCalc(6.3,4.5,NAN,6.8);
    //     float z = velocityCalc(9.8,6.4,4.5,NAN);
    //     printf("The value of Final velocity is: %.2lf\n",w);
    //     printf("The value of Initial velocity is: %.2lf\n",x);
    //     printf("The value of Acceleration is: %.2lf\n",y);
    //     printf("The value of Time is: %.2lf",z);
    // }

// 6. Write a void function named “equations” which solves simultaneous equations. Your program will take six parameters. E.g. function(double a, double b, double c, 
// double d, double e, double f){}. By solving simultaneous equations, you are finding where the two lines cross each other, so your function should print an x and y 
// coordinate. ax+by=c......(i)
// dx+ey=f........(ii)
// a = number in front of x of equation one
// b = number in front of y of equation one
// c = constant of equation one
// d = number in front of x of equation two
// e = number in front of y of equation two 
// f = constant of equation two
    void equations(double a, double b, double c, double d, double e, double f){
        double x;
        double y;
        y = (c - a*x)/b;
        x = (f - d* y)/e;
        printf("The value of y is %2.lf.\n",y);
        printf("The value of x is %2.lf.",x);
    }
    void main(){
        double a = 3;
        double b = 4;
        double c = 6;
        double d = 5;
        double e = 2;
        double f = 1;
        equations(a,b,c,d,e,f);
    }
