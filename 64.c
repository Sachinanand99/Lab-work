#include<stdio.h>
int fact(int val){
    int res = calculateexp(val);
    return res;
}
int calculateexp(int num){
    int fac;
    for(int i=1; i<=num; i++){
        fac*= i;
    }
    return fac;
}
int main(){
    int num;
    printf("Enter the number for factorial : ");
    scanf("%d", &num);
    int out = fact(num);
    printf("%d is the factorial of %d", out, num);
    return 0;
}