#include<stdio.h>
#include<math.h>
int main(){
    int num, dig, count=0, sum = 0;
    printf("Enter any number : ");
    scanf("%d", &num);
    int temp = num;
    while(num!=0){
        count++;
        num/=10;
    }
    num = temp;
    while(num!=0){
        dig = num%10;
        sum += pow(dig, count);
        num/=10;
    }
    if (sum==temp){
        printf("It is an armstrong number.");
    }
    else{
        printf("It is not an armstrong number.");
    }
    return 0;
}