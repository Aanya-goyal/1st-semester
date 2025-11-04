/*Define a structure Rectangle with members:
int length;
int breadth;
Write a function struct Rectangle inputRectangle() that takes input for a rectangle and returns it.
Write another function int area(struct Rectangle r) that returns the area.*/
#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle inputRectangle() {
    struct Rectangle r;
    printf("Enter length: ");
    scanf("%d", &r.length);
    printf("Enter breadth: ");
    scanf("%d", &r.breadth);
    return r;
}

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    struct Rectangle rect;

    rect = inputRectangle();

    printf("Area of rectangle = %d\n", area(rect));

    return 0;
}