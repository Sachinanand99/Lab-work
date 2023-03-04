#include<stdio.h>
int main(){
    int dig, num, sum=0;
    printf("Enter any number : ");
    scanf("%d", &num);
    while(num!=0){
        dig = num%10;
        sum +=dig;
        num /=10;
    }
    printf("Sum of digits is %d", sum);
    return 0;
}