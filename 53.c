#include<stdio.h>
int main(){
    // Circle, Triangle, Square, Rectangle,
    int init=0, opt;
    while(init==0){
        printf("\nEnter 1 for finding area of Circle\n");
        printf("Enter 2 for finding area of Triangle\n");
        printf("Enter 3 for finding area of Square\n");
        printf("Enter 4 for finding area of Rectangle\n");
        printf("Enter 0 for exiting : ");
        scanf("%d", &opt);
        if (opt==1){
            float r, area, pi=3.14;
            printf("Enter the radius of circle : ");
            scanf("%f", &r);
            area = pi*r*r;
            printf("Area of circle is %.2f", area);
        }
        else if (opt==2){
            float height, base, area;
            printf("Enter the base length and height of triangle : ");
            scanf("%f%f", &base, &height);
            area = 0.5*base*height;
            printf("Area of triangle is %.2f", area);
        }
        else if (opt==3){
            float side, area;
            printf("Enter the side length of square : ");
            scanf("%f", &side);
            area = side*side;
            printf("Area of Square if %.2f", area);
        }
        else if (opt==4){
            float l, b, area;
            printf("Enter the length and breadth of rectangle : ");
            scanf("%f%f", &l, &b);
            area=l*b;
            printf("Area of rectangle if %.2f", area);
        }
        else if(opt==0){
            init=1;
        }
        else{
            printf("You have given a wrong input.Try again.");
        }
    }
}