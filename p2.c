#include<stdio.h>
int main()
{
    int i=0,n=0,sum=0;
    printf("enter the number of terms :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
       

    }
    printf("sum of first %d terms is %d\n",n,sum);
    return 0;
}