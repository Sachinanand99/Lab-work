#include<stdio.h>
float prod(int x, float y){
    float pr;
    pr = x*y;
    return pr;
}
int main(){
    int a;
    float b, res;
    printf("Enter an integer : ");
    scanf("%d", &a);
    printf("Enter an float number : ");
    scanf("%f", &b);
    res = prod(a, b);
    printf("Product of these numbers is %.2f", res);
    return 0;
}