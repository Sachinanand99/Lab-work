#include<stdio.h>
int main(){
    float area, pi = 3.14, rad;
    printf("Enter the radius of circle : ");
    scanf("%f", &rad);
    area = pi*rad*rad;
    printf("%.2f is the area of circle.", area);
    return 0;
}