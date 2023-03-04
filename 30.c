#include<stdio.h>
#include<math.h>
int main(){
    int a, b, po;
    printf("Enter first and second number : ");
    scanf("%d%d", &a, &b);
    po = pow(a, b);
    printf("%d is the number %d raise to power %d", po, a, b);
    return 0;
}