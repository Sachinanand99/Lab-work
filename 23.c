#include<stdio.h>
int main(){
    float carb;
    int hard, tens, grade, case1=0, case2=0, case3=0;
    printf("Enter the hardness of steel : ");
    scanf("%d", &hard);
    printf("Enter the Carbon content of steel : ");
    scanf("%f", &carb);
    printf("Enter the Tensile strength of steel : ");
    scanf("%d", &tens);
    if (hard>50){
        case1 = 1;
    }
    if (carb<0.7){
        case2 = 1;
    }
    if (tens>5600){
        case3 = 1;
    }

    
    if (case1==1&&case2==1&&case3==1){
        grade = 10;
    }
    else if (case1==1&&case2==1&&case3==0){
        grade = 9;
    }
    else if (case1==0&&case2==1&&case3==1){
        grade = 8;
    }
    else if (case1==1&&case2==0&&case3==1){
        grade = 7;
    }
    else if ((case1==1&&case2==0&&case3==0)||(case1==0&&case2==1&&case3==0)||(case1==0&&case2==0&&case3==1)){
        grade = 6;
    }
    else if (case1==0&&case2==0&&case3==0){
        grade = 5;
    }
    printf("Grade of steel is %d.", grade);
}