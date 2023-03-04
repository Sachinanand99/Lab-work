#include<stdio.h>
int main(){
    int count, pos=0, neg=0, zer=0, inp;
    printf("Enter the number of input you want to give : ");
    scanf("%d", &count);
    while(count>0){
        printf("Enter input : ");
        scanf("%d",&inp);
        if(inp>0){
            pos+=1;
        }
        else if(inp<0){
            neg+=1;
        }
        else{
            zer+=1;
        }
        count--;
    }
    printf("%d is positive\n%d is negative\n%d is zeros.", pos, neg, zer);
    return 0;
}