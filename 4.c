#include<stdio.h>
int main(){
    int sum=0, num1, num2;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
    sum = num1+num2;
    printf("%d is the sum of two numbers.", sum);
    return 0;
}