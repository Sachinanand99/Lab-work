#include<stdio.h>
int main(){
    int init=0, opt;
    float r, area, height, base, l, b, side, pi=3.14; 
    while(init==0){
        printf("\nEnter 1 for finding area of Circle\n");
        printf("Enter 2 for finding area of Triangle\n");
        printf("Enter 3 for finding area of Square\n");
        printf("Enter 4 for finding area of Rectangle\n");
        printf("Enter 0 for exiting : ");
        scanf("%d", &opt);
        switch(opt){
        case 1:
            printf("Enter the radius of circle : ");
            scanf("%f", &r);
            area = pi*r*r;
            printf("Area of circle is %.2f", area);
            break;
        case 2:
            printf("Enter the base length and height of triangle : ");
            scanf("%f%f", &base, &height);
            area = 0.5*base*height;
            printf("Area of triangle is %.2f", area);
            break;
        case 3:
            printf("Enter the side length of square : ");
            scanf("%f", &side);
            area = side*side;
            printf("Area of Square if %.2f", area);
            break;
        case 4:
            printf("Enter the length and breadth of rectangle : ");
            scanf("%f%f", &l, &b);
            area=l*b;
            printf("Area of rectangle if %.2f", area);
            break;
        case 0:
            init=1;
            break;
        default:
            printf("You have given a wrong input.Try again.");
            continue;
        }
    }
}