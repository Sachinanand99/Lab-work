#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);
    if (ch>=65 && ch<=90){
        printf("Capital letter.");
    }
    else if (ch>=97 && ch<=122){
        printf("Small letter.");
    }
    else if (ch>=48 && ch<=57){
        printf("Numbers.");
    }
    else if ((ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127)){
        printf("Special Characters.");
    }
    return 0;
}