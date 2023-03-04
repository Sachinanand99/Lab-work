#include<stdio.h>
int main(){
    char inp;
    printf("Enter a character : ");
    scanf("%c", &inp);
    if(inp>='0'&&inp<='9'){
        printf("%c is a digit.", inp);
    }
    else{
        printf("%c is not a digit.", inp);
    }
    return 0;
}