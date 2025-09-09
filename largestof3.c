#include <stdio.h>
int main(){
    int a,b,c,e,largest;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("enter third number");
    scanf("%d",&c);
    e=(a>b?a:b);
    largest=(e>c?e:c);
    printf("largest number is %d",largest);
    return 0;

}