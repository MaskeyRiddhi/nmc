void main(){
    int n1, n2, n3;
    int *num1 = &n1;
    int *num2 = &n2;
    int *num3 = &n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", num1, num2, num3);
    int sum = *num1 + *num2+ *num3;
    printf("Sum of three numbers: %d",sum)
 }