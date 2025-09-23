#include<stdio.h>
int main(){
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    if (num%2==1)
    {
        printf("number is odd");
    }
    else {
        printf("number is even");
    }
      return 0;
}