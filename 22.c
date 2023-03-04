#include<stdio.h>
int main(){
    int rage, sage, aage;
    printf("Enter the age of Ram : ");
    scanf("%d",&rage);
    printf("Enter the age of Shyam : ");
    scanf("%d",&sage);
    printf("Enter the age of Ajay : ");
    scanf("%d",&aage);
    if (rage>sage){
        if (aage>sage){
            printf("Shyam is Youngest.");
        }
    }
    else if(rage>aage){
        printf("Ajay is Youngest.");
    }
    else{
        printf("Ram is Youngest.");
    }
}