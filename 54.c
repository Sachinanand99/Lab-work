#include<stdio.h>
int main(){
    int init=0, opt;
    while(init==0){
        printf("\nEnter 1 for addition\n");
        printf("Enter 2 for subtraction\n");
        printf("Enter 3 for multiplication\n");
        printf("Enter 4 for Division\n");
        printf("Enter 0 for exiting. : ");
        scanf("%d", &opt);
        if(opt==1){
            int a, b, sum;
            printf("Enter two numbers : ");
            scanf("%d%d", &a, &b);
            sum = a+b;
            printf("Sum of two numbers is %d", sum);
        }
        else if(opt==2){
            int a, b, sub;
            printf("Enter two numbers : ");
            scanf("%d%d", &a, &b);
            sub = a-b;
            printf("Subtraction of two numbers is %d", sub);
        }
        else if(opt==3){
            int a, b, mul;
            printf("Enter two numbers : ");
            scanf("%d%d", &a, &b);
            mul = a*b;
            printf("Multiplication of two numbers is %d", mul);
        }
        else if(opt==4){
            float a, b, div;
            printf("Enter two numbers : ");
            scanf("%f%f", &a, &b);
            div = a/b;
            printf("Division of two numbers is %.2f", div);
        }
        else if(opt==0){
            init = 1;
        }
        else{
            printf("You have given wrong input try again.");
            continue;
        }
    }
}