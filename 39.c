#include<stdio.h>
float facto(int num){
    int fact=1;
    for (int i=1; i<=num;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    float sum=0;
    for(int i=1; i<=7; i++){
        sum+=i/facto(i);
    }
    printf("%.2f", sum);
    return 0;
}