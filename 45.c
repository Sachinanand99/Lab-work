#include<stdio.h>
int main(){
    int a, b, min, max;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    if(a>b){
        min = b;
        max = a;
    }
    else{
        min = a;
        max = b;
    }
    b = min;
    for(;min>0;min--){
        a = max%min;
        if (a==0){
            a = b%min;
            if(a==0){
                printf("%d\t",min);
                break;
            }
        }
    }
    return 0;
}