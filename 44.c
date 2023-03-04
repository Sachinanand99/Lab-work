#include<stdio.h>
int main(){
    int num, sum=0;
    for(int i=1; i<=10; i++){
        printf("Enter number : ");
        scanf("%d", &num);
        if(num<0){
            break;
        }
        else{
            sum += num;
        }
    }
    printf("Sum of the numbers is %d", sum);
}