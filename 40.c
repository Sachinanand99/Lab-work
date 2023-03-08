#include<stdio.h>
int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    int a,factor;
    printf("Enter any number : ");
    scanf("%d", &a);
    factor = factorial(a);
    printf("the factorial of %d is : %d \n",a,factor);
    return 0;
}
