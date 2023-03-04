#include<stdio.h>
#include<math.h>
int main(){
    int num, sum = 0;
    printf("Enter the value of n : ");
    scanf("%d", &num);
    while(num>0){
        sum += pow(num, 2);
        num--;
    }
    printf("Sum of the series is %d", sum);
}