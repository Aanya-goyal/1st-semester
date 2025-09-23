#include<stdio.h>
int main(){
    int age;
    printf("enter the age : ");
    scanf("%d",&age);
    if (age<18){
        if(age<0)
     { 
        printf("invalid age");
     } 
     else{
        printf("you are not eligible to vote ");
     }
    } 
    else{
        printf("you are eligible to vote");
    }  
    return 0;
}