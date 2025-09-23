//Write a C program that takes two numbers and an operator (+, -, *, /) from the user and performs the operation using a switch case.





#include<stdio.h>
int main(){
    char op;
    float num1,num2,result;
    printf("enter the operator (+,-,/,*) :");
    scanf("%c",&op);
    printf("enter two numbers:");
    scanf("%f,%f",&num1,&num2);
    switch(op){
        case '+':
        result=num1+num2;
        printf("%.1f + %.1f=%.1f",num1,num2,result);
        break;
        case '-':
        result=num1-num2;
        printf("%.1f - %.1f=%.1f",num1,num2,result); 
        break;
        case '/':
        if(num2!=0){
        result=num1/num2;
        printf("%.1f / %.1f=%.1f",num1,num2,result);}
        else{
            printf("division by zero is not possible");
        }
        break;
        case '*':
        result=num1*num2;
        printf("%.1f * %.1f=%.1f",num1,num2,result); 
        break;
        default:
        printf("you entered invalid operator");
    }
    return 0;


}