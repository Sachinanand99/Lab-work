#include<stdio.h>
int sum(int a, int b){
    int sum =a+b;
    return sum;
}
int main(){
    int a, b, res;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    res = sum(a, b);
    printf("%d", res);
    return 0;
}