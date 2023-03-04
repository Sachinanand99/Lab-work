#include<stdio.h>
int main(){
    int payrate, salary, hrs;
    printf("Enter the Pay rate and Hours work done : ");
    scanf("%d%d", &payrate, &hrs);
    salary = hrs*payrate;
    printf("Your salary is %d", salary);
    return 0;
}