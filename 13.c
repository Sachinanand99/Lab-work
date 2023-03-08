#include<stdio.h>
int main(){
    int c, d, t;
    printf("Enter two numbers : ");
    scanf("%d%d", &c, &d);
    t = c;
    c = d;
    d = t;
    printf("%d is the new value of c and %d is the new value of d", c, d);
    return 0;
}