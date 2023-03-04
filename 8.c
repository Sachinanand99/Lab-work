#include<stdio.h>
int main(){
    float r, area, circ, pi=3.14;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    area = pi*r*r;
    circ = 2*pi*r;
    printf("%.2f is the area and %.2f is the circumference of the circle.", area, circ);
    return 0;
}