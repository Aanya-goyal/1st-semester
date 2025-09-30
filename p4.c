#include<stdio.h>
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    int i=1,count=0;
    while (num>0)
    {
        num=num/10;
        i++;
        count++;

    }
    printf("number of digits is %d\n",count);
    return 0;
    
    
}