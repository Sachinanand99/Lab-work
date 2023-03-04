#include<stdio.h>
int main(){
    float perc, prof, cp, sp;
    printf("Enter the cost price of item : ");
    scanf("%d", &cp);
    printf("Enter the selling price of item. : ");
    scanf("%d", &sp);
    if (cp>sp){
        prof = cp-sp;
        printf("You have made loss of %d : ", prof);
    }
    else{
        prof = sp-cp;
        printf("You have made Profit of %d : ", prof);
    }
    perc = (prof/cp)*100;
    printf("Your percentage is %.2f.", perc);
    return 0;
}