#include<stdio.h>
int main(){
    int num, sum = 0, dig1, dig2;
    printf("Enter a four digit number : ");
    scanf("%d", &num);
    dig1 = num%10;
    num = num/1000;
    sum = dig1+num;
    printf("Sum of its first and its last digit is %d", sum);
    return 0;
}