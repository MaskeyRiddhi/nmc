void main() {
   int num, sum = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   while (num != 0) {
       sum += num % 10;
       num /= 10;
   }

   printf("The sum of digits of the number is %d.", sum);
}
