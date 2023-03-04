#include<stdio.h>
#include<math.h>
int main(){
    float x, y, r, fac;
    printf("Enter the radius of circle, x and y coordinates of point : ");
    scanf("%f%f%f", &r, &x, &y);
    fac = pow(x, 2)+pow(y, 2);
    r = pow(r, 2);
    if (fac>r){
        printf("Point lies outside the circle.");
    }
    else if(fac<r){
        printf("Point lies inside the circle.");
    }
    else{
        printf("Point lies on the circle.");
    }
    return 0;
}