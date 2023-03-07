#include<stdio.h>
int main(){
    int num, dig, sum = 0;
    printf("Enter five digit number : ");
    scanf("%d", num);
    for(int i = 0; i<5; i++){
        dig = num%10;
        num = num/10;
        sum += dig;
    }
    printf("%d is the sum of digit.", sum);
    return 0;
}