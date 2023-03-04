#include<stdio.h>
#include<math.h>
int main(){
    float a=3.14;
    printf("\tX=0\tX=30\tX=60\tX=90\n");
    printf("Sin(x)\t%.2f\t%.2f\t%.2f\t%.2f\n", sin(0), sin(a/6), sin(a/3), sin(a/2));
    printf("Cos(x)\t%.2f\t%.2f\t%.2f\t%.2f\n", cos(0), cos(a/6), cos(a/3), cos(a/2));
    printf("Tan(x)\t%.2f\t%.2f\t%.2f\t%.2f\n", tan(0), tan(a/6), tan(a/3), tan(a/2));
    return 0;
}