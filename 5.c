#include<stdio.h>
int main(){
    float si, r, p, n;
    printf("Enter principle, time and rate : ");
    scanf("%f%f%f", &p, &n, &r);
    si = p*n*r/100;
    printf("%.2f is the simple interest.", si);
    return 0;
}