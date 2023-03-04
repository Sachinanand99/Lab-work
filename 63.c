#include<stdio.h>
float facto(int num){
    int fact=1;
    for (int i=1; i<=num;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    float sum=0;
    for(int i=1; i<=n; i++){
        sum+=i/facto(i);
    }
    printf("%.2f", sum);
    return 0;
}