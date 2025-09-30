#include<stdio.h>
int main(){
    float a=0,b=0,operation=0;
    char op;
    int choice;
    do{
        printf("simple calculator\n");
        printf("1.perform calculation\n2.exit\n");
       printf("enter your choice :");
       scanf("%d",&choice);
       if(choice==1){
         printf("enter two numbers :");
        scanf("%f %f" ,&a,&b);

             printf("enter the operation you want to perform (+,-,*,/):");
            scanf("%c",&op);
            scanf("%c",&op);
            switch(op)
            {
            case '+':
                operation=a+b;
                printf("result is %f\n",operation);
                break;
                case '-':
                operation=a-b;
                printf("result is %f\n",operation);
                break;
                case '*':
                operation=a*b;
                printf("result is %f\n",operation);
                break;
                case '/':
                if (b==0){
                    printf("division by zero is not defined\n");
                    break;
                }
                operation=a/b;
                printf("result is %f\n",operation);
                break;
                
                default:
                printf("invalid operation\n");
            }
        }
        
        
        else if(choice!=2){
            printf("invalid choice,try again\n");
        }
    }

        while (choice!=2);
        {
            printf("calculator exited\n");

        }
        return 0;
    }
