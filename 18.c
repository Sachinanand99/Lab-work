#include<stdio.h>
int main(){
    float s1, s2, s3, s4, s5, avg;
    printf("Enter the marks of all five subjects : ");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
    avg = (s1+s2+s3+s4+s5)/5;
    if (avg>=60){
        printf("First Division.");
    }
    else if(avg>=50 && avg<60){
        printf("Second Division.");
    }
    else if(avg>=40 && avg<50){
        printf("Third Division.");
    }
    else{
        printf("Fail");
    }
    return 0;
}