//Write a C program to reverse the elements of an array using a function.
#include <stdio.h>
void reverseArray(int arr[], int n)
{
    int start = 0;int end = n-1;
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
}
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverseArray(arr,n);
    printf("reversed array is:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    return 0;

}