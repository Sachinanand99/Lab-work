#include<stdio.h>
int main(){
    float km, m, feet, inch, centi;
    printf("Enter distance between the cities in km : ");
    scanf("%f", &km);
    m = km*1000;
    centi = m*100;
    feet = m*3.28084;
    inch = m*39.3701;
    printf("m = %.2f\ncm = %.2f\nfeet = %.2f\ninch = %.2f", m, centi, feet, inch);
    return 0;
}