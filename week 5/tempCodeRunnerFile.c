struct complex{
    float real;
    float imag;
};
int main(){
    struct complex a,b,c;
    printf("Enter real and imaginary for first compex number: ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter real and imaginary for second compex number: ");
    scanf("%f %f", &b.real, &b.imag);
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    printf("Third complex number: %.1f %.1fi",c.real,c.imag);
}