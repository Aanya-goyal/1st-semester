#include<stdio.h>
int main(){
    int a=10;
    int pre,post;
    printf("value of a is %d\n",a);
    pre=++a;
    printf("value of pre increment is%d",pre);
    post=a++;
    printf("value of post increment is%d\n",post);
    return 0;
    
}