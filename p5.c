#include<stdio.h>
int main(){
    int i=0,n=0,fact=1;
    printf("enter a number :");
    scanf("%d",&n);
    while(n>0){
        fact=fact*n;
        n--;
        i++;
        if (n==0){
            break;}
        }printf("factorial is %d\n",fact);
        return 0;
    }

