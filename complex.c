/*write a program in that uses functions to perform the following operations
a) reading a complex number.
b) writing a complex number.
c) Addition and subraction of two numbers*/
#include<stdio.h>
struct complex{
    float real;
    float imag;

};
int main(){
    struct complex num1,num2,sum,diff;
    //reading complex numbers
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f%f",&num1.real,&num1.imag);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f%f",&num2.real,&num2.imag);
    //addition of two complex numbers
    sum.real=num1.real+num2.real;
    sum.imag=num1.imag+num2.imag;
    //subtraction of two complex numbers
    diff.real=num1.real-num2.real;
    diff.imag=num1.imag-num2.imag;
    //printing complex numbers and results
    printf("First complex number: %.2f + %.2fi\n",num1.real,num1.imag);
    printf("Second complex number: %.2f + %.2fi\n",num2.real,num2.imag);
    printf("Sum of two complex numbers: %.2f + %.2fi\n",sum.real,sum.imag);
    printf("Difference of two complex numbers: %.2f + %.2fi\n",diff.real,diff.imag);
    return 0;
}