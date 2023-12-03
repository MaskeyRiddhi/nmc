#include <stdio.h>

//1. Write a program to print out all triangular numbers from 1 to n
//(entered by user).


// void main(){
//    int n;
//    printf("enter the value of n: ");
//    scanf("%d",&n);
//    int i,j=1,k=1;
//    printf("All triangular numbers from 1 to n: ");
//    for (int i=1;i<=n;i++){
//        printf("%d\n",k);
//        j = j+1;
//        k = k+j;
//    }
// }

//2. Write a program to print the sum of digits of the number provided
//by user.

//void main() {
//    int num, sum = 0;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    while (num != 0) {
//        sum += num % 10;
//        num /= 10;
//    }
//
//    printf("The sum of digits of the number is %d.", sum);
//}





//3. Write a program to create simple calculator using switch case. (The
//operators +, -, *, /and % must be asked to user as a character.)

//void main(){
//    char op;
//    double num1, num2;
//    printf("Enter the operator(+, -, *, /, %): ");
//    scanf("%c",&op);
//    printf("Enter the two numbers: ");
//    scanf("%lf %lf",&num1, &num2);
//    switch(op){
//    case'+':
//        printf("%.1lf + %.1lf = %.1lf",num1, num2, num1+num2);
//    break;
//    case'-':
//        printf("%.1lf - %.1lf = %.1lf",num1, num2, num1-num2);
//    break;
//    case'*':
//        printf("%.1lf * %.1lf = %.1lf",num1, num2, num1*num2);
//    break;
//    case'/':
//        printf("%.1lf / %.1lf = %.1lf",num1, num2, num1/num2);
//    break;
//    case'%':
//        printf("%.1lf %% %.1lf = %.1lf",num1, num2, fmod(num1,num2));
//    break;
//    default:
//        printf("Invalid operator!");
//    }
//}

//4. Write a program to input a character from the user until an enter
//is pressed and print it in lowercase. If the character is in uppercase,
//then you must change it in lowercase and if it is in lowercase then
//you must print as it is.

//void main() {
//    char letter;
//    printf("Enter characters (press Enter to stop):");
//    while ((letter = getchar()) != 10) {
//        if (letter >= 'A' && letter <= 'Z') {
//            letter = letter + ('a' - 'A');
//            printf("The given character in lowercase: %c\n", letter);
//        } else {
//            printf("The character in lowercase is: %c\n", letter);
//        }
//        while ((letter = getchar()) != '\n' );
//    }
//    printf("Enter key pressed. Program ending.\n");
//}

//5. Write a program to ask the final score from user and print it
//whether he/she is passed in (distinction above 80%, first division
//above 60% to 80%, second division above 50% to 60%, Third division
//above 40% to 50%, and fail below 40%). It is mandatory to use elseif
//statement to solve the task.
//void main(){
//    double finalScore;
//    printf("Enter the final score of the user: ");
//    scanf("%lf",&finalScore);
//
//    if (finalScore >=80){
//        printf("She/He is passed with Distinction.");
//    } else if (finalScore >=60){
//        printf("She/He is passed with First Division.");
//    } else if (finalScore >=50){
//        printf("She/He is passed with Second Division.");
//    } else if (finalScore >=40){
//        printf("She/He is passed with Third Division.");
//    } else{
//        printf("She/He has failed.");
//    }
//}

//6. Write a program to print the following pattern using nested loop:
//A
//B B
//C C C
//D D D D
//E E E E

void main(){
    char c = 'E';
    for (char i='A'; i<=c; i++){
        for (char j='A'; j<=i; j++){
            printf("%c",i);
        }
    printf("\n");
    }
}


