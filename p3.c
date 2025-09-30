#include<stdio.h>
int main(){
    int  num,i,fact=0;
    printf("enter a number :");
      scanf("%d",&num);
      if(num<=1){
        printf("number is not prime\n");

      }
      else {
        for(i=2;i<=num/2;i++){
            if (num%i==0){
                fact=1;
                break;
                
            }
        }
        if(fact==0){
            printf("number is prime\n");
        }
        else{
            printf("number is not prime\n");
        }
      }
      return 0;
}