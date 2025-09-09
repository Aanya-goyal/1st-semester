#include<stdio.h>
int main(){
    int a,b,largest;
    printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
largest=(a>b?a:b);
printf("largest number is %d",largest);
return 0;
}