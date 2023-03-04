#include<stdio.h>
int main(){
    int num, temp;
    printf("Enter any number : ");
    scanf("%d", &num);
    for(int i = num; i>0; i--){
        temp = num%i;
        if (temp==0){
            printf("%d\t", i);
        }
    }
    return 0;
}