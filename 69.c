#include<stdio.h>
#include<math.h>
float area(float a, float b, float c){
    float s=(a+b+c)/2;
    float fun = s*(s-a)*(s-b)*(s-c);
    float ar = sqrt(fun);
    printf("%.2f is the area of triangle.", ar);

}
int main(){
    float a, b, c, ar;
    printf("Enter the first side of triangle : ");
    scanf("%f", &a);
    printf("Enter the second side of triangle : ");
    scanf("%f", &b);
    printf("Enter the third side of triangle : ");
    scanf("%f", &c);
    area(a, b, c);
    return 0;
}