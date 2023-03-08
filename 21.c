#include<stdio.h>
int main(){
    char gen;
    int age, loc, health, prem, max;
    printf("Enter the gender(m/f) : ");
    scanf("%c", &gen);
    printf("Enter the age : ");
    scanf("%d", &age);
    printf("Enter 1 for excellent health\n2 for poor health : ");
    scanf("%d", &health);
    printf("Enter 1 if you live in city \n2 if you live in village : ");
    scanf("%d", &loc);
    if (health == 1 && (age>=25 ||age<= 35) && loc==1){
        if(gen=='m'){
            prem = 4;
            max = 200000;
        }
        else if(gen == 'f'){
            prem = 3;
            max = 100000;
        }
    }
    else if(health == 2 &&(age>=25||age<=35) && loc==2 && gen =='m'){
        prem = 6;
        max = 100000;
    }
    else{
        printf("You are not insured.");
    }
    printf("Your premium rate is %d per thousand.\n", prem);
    printf("Your maximum amount of insurance is %d.", max);
    return 0;
}