#include<stdio.h>
void leapyear(int year){
    if (year%400==0||year%100!=0&&year%4==0){
        printf("Leap Year\n");
    }
    else{
        printf("Not a leap year.\n");
    }
}
int main(){
    int year;
    printf("\nEnter year : ");
    scanf("%d", &year);
    leapyear(year);
    return 0;
}