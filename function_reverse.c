/*Develop a function reverse (str) that accepts a string argument .
Write a c program that invokes this function to find the reverses of given strings.
*/
#include<stdio.h>
#include<string.h>
void reverse(char str[]) {
    int n=strlen(str);
    for(int i=n-1;i>=0;i--) {
        printf("%c",str[i]);
    }
}
int main() {
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    printf("Reversed string is : ");
    reverse(str);
    return 0;
}