#include<stdio.h>
int main(){
    int a, b, t;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("%d is the new value of a and %d is the new value of b", a, b);
    return 0;
}