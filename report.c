#include<stdio.h>
int main(){
    int M;
    printf("enter the marks obtained by student: ");
    scanf("%d",&M);
    if(M>=90 && M<100){
        printf("grade A");
    }
    else if(M>=75 && M<90){
        printf("grade B");
    }
    else if(M>=50 && M<75){
        printf("grade C ");
    }
    else{
        printf("fail");
    }
    return 0;
}