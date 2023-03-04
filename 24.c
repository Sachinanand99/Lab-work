#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);
    (ch>=65 && ch<=90)?printf("Capital Letter.\n"):printf("Not a Capital Letter.\n");
    (ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127)?printf("Special Character."):printf("Not a Special Character.");
    return 0;
}