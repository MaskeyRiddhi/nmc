#include <stdio.h>
#include <math.h>
// 1. Write a void function which finds and prints the midpoint coordinates of a line. The function should take in four parameters (x1,y1, x2 and y2).
// xmid=(x1+x2)/2, ymid=(y1+y2)/2

//int midpoint(int x1, int x2, int y1, int y2 ){
//    int xmid = (x1 + x2) / 2;
//    int ymid = (y1 + y2) / 2;
//}
//void main()
//{
//    int x1=5, x2=10;
//    int y1=15, y2=20;
//    int xmid, ymid;
//    midpoint(x1, x2, y1, y2 );
//    printf("The midpoint coordinates of a line is: (%d ,%d)",xmid,ymid);
//}

// 2. Write a function that takes two integers as arguments and return the greatest among them.
//
//int greatest(int x, int y){
//    if (x > y){
//        printf("%d is the greatest number.",x);
//    } else {
//        printf("%d is the greatest number.",y);
//        }
//
//    }
//
//    void main (){
//    int x = 24;
//    int y = 50;
//    greatest(x,y);
//    }

// 3. print triangle numbers fron 1 to n
//int triangular(int n){
//    int i, j=1, k=1;
//    for (int i=1; i<=n; i++){
//        printf("%d ", k);
//        j = j +1;
//        k = k + j;
//    }
//}
//
//void main(){
//    int n = 5;
//    printf("All the triangular numbers from 1 to n: ");
//    triangular( n);
//}

// 4. Write a function named "velocityCalc" which returns an appropriate value for the formula "v=u+at", where v is the final velocity,
// u is the initial velocity,a is the acceleration and t is the time that has elapsed. Depending upon which variable is set to "NAN" when the
// function is called, your function should work it out and return the value.

//float velocityCalc(float u, float a, float t, float v) {
//    if (isnan(v)) { // when final velocity is unknown
//        v = u + a * t;
//        return v;
//    } else if (isnan(u)) {  // when initial velocity is unknown
//        u = v - a * t;
//        return u;
//    } else if (isnan(a)) {  // when acceleration is unknown
//        a = (v - u) / t;
//        return a;
//    } else {                 // when time is unknown
//        t = (v - u) / a;
//        return t;
//    }
//}
//void main(){
//    float w = velocityCalc(NAN, 5.6, 7.8, 6.8);
//    float x = velocityCalc(5.2,NAN,4.5,4.6);
//    float y = velocityCalc(6.3,4.5,NAN,6.8);
//    float z = velocityCalc(9.8,6.4,4.5,NAN);
//    printf("The value of Final velocity is: %.2lf\n",w);
//    printf("The value of Initial velocity is: %.2lf\n",x);
//    printf("The value of Acceleration is: %.2lf\n",y);
//    printf("The value of Time is: %.2lf",z);
//}

// 5.Write a void function named "equations" which solves simultaneous equations. Your program will take six parameters.
// E.g. function(double a, double b, double c, double d, double e, double f){}. By solving simultaneous equations, you are
// finding where the two lines cross each other, so your function should print an x and y coordinate.
// ax+by=c ......(i)
// dx+ey=f.........(ii)
// a = number in front of x of equation one b= number in front of y of equation one c = constant of equation one
// d = number in front of x of equation two e = number in front of y of equation two f= constant of equation two

//void equations(double a, double b, double c, double d, double e, double f){
//    double x;
//    double y;
//     y = (c - a*x)/b;
//     x = (f - d* y)/e;
//    printf("The value of y is %2.lf\n",y);
//    printf("The value of x is %2.lf",x);
//}
//void main(){
//    double a = 3;
//    double b = 4;
//    double c = 6;
//    double d = 5;
//    double e = 2;
//    double f = 1;
//    equations(a,b,c,d,e,f);
//}
