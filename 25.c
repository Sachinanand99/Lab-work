#include<stdio.h>
int main(){
    int yr;
    printf("Enter Year : ");
    scanf("%d", &yr);
    (yr%400==0||yr%100!=0&&yr%4==0)?printf("Leap year."):printf("Not a leap year");
    return 0;
}