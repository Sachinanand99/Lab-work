#include<stdio.h>
#include<math.h>
int main(){
    int x, y, p;
    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);
    p = pow(x, y);
    printf("%d raise to the power %d is %d", x, y, p);
    return 0;
}