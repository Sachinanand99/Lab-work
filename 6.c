#include<stdio.h>
int main(){
    float sal, da, ra;
    printf("Enter the salary of Ramesh : ");
    scanf("%f", &sal);
    da = 0.4*sal;
    ra = 0.2*sal;
    printf("%.2f is the dearness allowance of Ramesh\n%.2f is the house rent allowance of Ramesh.", da, ra);
    return 0;
}