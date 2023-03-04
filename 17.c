#include<stdio.h>
int main(){
    int sal;
    float hra, da;
    printf("Enter the basic salary of employee : ");
    scanf("%d", &sal);
    if (sal<1500){
        hra = 0.1*sal;
        da = 0.9*sal;
    }
    else{
        hra = 500;
        da = 0.98*sal;
    }
    printf("%.2f is da and %.2f is hra of employee.", da, hra);
    return 0;
}