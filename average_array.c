

//Write a C program to calculate the average of n numbers stored in an array using a function.
#include <stdio.h>
float average(int a[], int n)
{
    float sum = 0.0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    return sum/n;
}
int main()
{
    int a[10]={10,20,30,190,70,90,80,78,68,57};
    int n=10;
    float avg;
    avg=average(a,n);
    printf("average=%.2f\n",avg);
    return 0;

}