#include<stdio.h>
int main(){
    float l, b, r, pi = 3.14, arc, arr, cr, peri;
    printf("Enter the length and breadth of rectangle : ");
    scanf("%f%f", &l, &b);
    arr = l*b;
    peri = 2*(l+b);
    printf("%.2f is the area and %.2f is the perimeter of rectangle.\n", arr, peri);
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    arc = pi*r*r;
    cr = 2*pi*r;
    printf("%.2f is area and %.2f is the circumference of circle.", arc, cr);
    return 0;
}