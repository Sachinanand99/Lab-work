#include<stdio.h>
int main(){
    float len;
    printf("Enter length in Inches : ");
    scanf("%f", &len);
    len = 2.54*len;
    printf("Length in centimeters is %.2f", len);
    return 0;
}