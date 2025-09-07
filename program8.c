  #include<stdio.h>
   int main(){
    int num,sum=0;
    printf("enter a four digit number\n:");
    scanf("%d",&num);
    sum+= num%10;
    num/=10;
    sum+=num%10;
    num/=10;
    sum+=num%10;
    num/=10;
    sum+=num%10;
    printf("the sum of digits is %d\n",sum);
    return 0;
    
   }