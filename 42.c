#include<stdio.h>
int main(){
    int i, n;
    printf("Enter any number : ");
    scanf("%d", &n);
    i = 2;
    for(i = 2; i<n; i++){
        if(n%i == 0)
        break;
    }
    if(i == n){
        printf("It is a prime number.");
    }
    else{
        printf("It is not a prime number.");
    }
    return 0;
}