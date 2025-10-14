//Write a C program to count how many even and odd numbers are present in an array using functions.
#include<stdio.h>
void count_odd_even(int a[], int n, int *odd_count, int *even_count)
{
    *odd_count = 0;
    *even_count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            (*even_count)++;
        else
            (*odd_count)++;
    }
    printf("odd_count=%d\n", *odd_count);
    printf("even_count=%d\n", *even_count);

}
int main(){
    int n;
    printf("enter the size of an array: ");
    scanf("%d", &n);
    int a[100];
    int o = 0, e = 0;
    printf("enter the elements of an array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    count_odd_even(a, n, &o, &e);
    return 0;

}