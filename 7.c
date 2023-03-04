#include<stdio.h>
int main(){
    float df, dc;
    printf("Enter temperature in Farhenheit degree : ");
    scanf("%f", &df);
    dc = (df-32)*0.5556;
    printf("Temperature in celcius is %.2f", dc);
    return 0;
}