#include <stdio.h>
//#include <stdlib.h>
// 1.Wap in c that takes user input and writes it to a file named "output.txt".Ensure the program checks for successful file opening and closing
// int main(){
//     FILE *fptr;
//     char str[50];
    // fptr = fopen("output.txt","w");
    // if (fptr == NULL){
    //     printf("unable to create file\n");
    //     return -1;

    // }
//     printf("enter the string to write in file:");
//     gets(str);

//     fputs(str,fptr);
//     printf("Written to file successfully");
//     fclose(fptr);
//     return 0;
// }

// 2. Develop a C program that reads the contents of a file named "input.txt" and displays them on the console. Validate file opening and closing.
// int main(){
//     FILE *fp;
//     char c;
//     fp = fopen("input.txt","r");
//     if (fp == NULL){
//         printf("Error: file not found.\n");
//         return 1;
//     }
    // while ((c = fgetc(fp)) != EOF) {
    // printf("%c",c);
    // }
    // fclose(fp);
    // return 0;
// }

// 3.Create a program in C that copies the contents of "input.txt" to "output.txt". Ensure proper handling of file opening and closing.
// int main(){
//     FILE *fp, *fptr;
//     fp = fopen("input.txt","r");
    // if (fp == NULL){
    //     printf("Error: file not found.\n");
    //     return 1;
    // }

//     fptr = fopen("output.txt","w");
//     if (fptr == NULL){
//         printf("unable to create file\n");
//         return -1;

//     }
//     char c;
//     while ((c = fgetc(fp)) != EOF) {
//         fputc(c,fptr);
//         putchar(c);
//     }
//     fclose(fp);
//     fclose(fptr);
//     printf("\nCopied the contents of input.txt to output.txt\n");
//     return 0;
// }

// 4. WAP that appends user-provided text to an existing file named "existing.txt". Implement necessary file handling procedures.
// int main(){
//     FILE *fapp;
//     fapp = fopen("existing.txt","a");
//     if (fapp == NULL){
//         printf("Error: file not found.\n");
//         return 1;
//     }
//     char str[50];
//     printf("\nEnter data to append: \n");
//     gets(str);
//     fputs(str,fapp);
//     printf("Append successfully.");
//     fclose(fapp);
//     return 0;
// }

// 5. WAP that deletes a file named "todelete.txt". Ensure proper handling for successful file deletion.
// int main(){
//     if (remove("todelete.txt") == 0)
//         printf("Deleted successfully");
//     else
//         printf("Unable to delete the file");

//     return 0;
// }
