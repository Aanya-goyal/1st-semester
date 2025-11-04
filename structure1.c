/*Write a C program to define a structure called Student with the following members:
name (string of max 50 characters)
SAP ID (integer)
marks (float)
Create an array of 5 students, take input for each, and display the details of all students*/
#include<stdio.h>
int main() {
    struct student {
        char name[50];
        int sap_id;
        float marks;
    }
    student[5];
    for(int i=0;i<5;i++){
        printf("Enter details for student %d\n",i+1);
        printf("Name:");
        scanf("%s",student[i].name);
        printf("SAP ID:");
        scanf("%d",&student[i].sap_id);
        printf("Marks:");
        scanf("%f",&student[i].marks);
    }
    printf("\nDetails of all students:\n");
    for(int i=0;i<5;i++){
        printf("Student %d:\n",i+1);
        printf("Name: %s\n",student[i].name);
        printf("SAP ID: %d\n",student[i].sap_id);
        printf("Marks: %.2f\n",student[i].marks);
    }
    return 0;
}