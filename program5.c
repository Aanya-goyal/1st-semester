#include<stdio.h>
int main(){
    int lenght,breadth,area,perimeter;
    printf("enter the lenght of the rectangle\n");
    scanf("%d",&lenght);
    printf("enter the breadth of the rectangle\n");
    scanf("%d",&breadth);
    area=lenght*breadth;
    perimeter=2*(lenght+breadth);
    printf("area of rectangle is%d\n",area);
    printf("perimeter of rectangle is%d\n",perimeter);
    return 0;

}
