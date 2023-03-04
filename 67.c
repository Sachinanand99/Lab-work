#include<stdio.h>
#include<math.h>
int num[]={};
int s=0;
int sum(int num){
    s += num;
    return s;
}
float avg(float out){
    float av=out/5;
    return av;
}
float perc(float num){
    float per = num/3;
    return per;
}
int main(){
    float out;
    for(int i=0; i<3; i++){
        printf("Enter %d subjects marks : ", i+1);
        scanf("%d", &num[i]);
        int temp = num[i];
        out = sum(temp);
    }
    float temp = out;
    out = avg(out);
    printf("Average of the marks is %.2f\n", out);
    out = perc(temp);
    printf("Percentage of marks is %.2f%%", out);
}