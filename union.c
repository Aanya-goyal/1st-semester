/*Define a union called Data that contains the following members:
int i;
float f;
char str[20];
Write a program to:
Assign values to each member of the union one by one.
Print all members after each assignment.*/
#include <stdio.h>
#include <string.h>

// Define the union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    data.i = 10;
    printf("After assigning int:\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("str = %s\n\n", data.str);  

    data.f = 220.5;
    printf("After assigning float:\n");
    printf("i = %d\n", data.i);        
    printf("f = %f\n", data.f);
    printf("str = %s\n\n", data.str);  

    strcpy(data.str, "Hello, Aanya!");
    printf("After assigning string:\n");
    printf("i = %d\n", data.i);        
    printf("f = %f\n", data.f);       
    printf("str = %s\n", data.str);

    return 0;
}