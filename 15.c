#include<stdio.h>
int main(){
    int sp, prof, cp; 
    printf("Enter the selling price and profit of 15 items : ");
    scanf("%d%d", &sp, &prof);
    cp = sp-prof;
    printf("%d is the cost price.", cp);
    return 0;
}