#include<stdio.h>
int main(){
    int num, dig;
    printf("Enter five digit number : ");
    scanf("%d", &num);
    for(int i=0; i<5; i++){
        dig = num%10;
        num = num/10;
        printf("%d", dig);
    }
    return 0;
}