#include<stdio.h>
#include<conio.h>
int main() {
    char a;
    printf("Enter a character: ");
    a = getchar();
    fflush(stdin);
    printf("\nYou entered: ");
    putchar(a);
    fflush(stdin);
    printf("\nEnter a character: ");
    a = getch();
    printf("\nYou entered: ");
    putchar(a);
    fflush(stdin);
    printf("\nEnter a character: ");
    a = getche();
    printf("\nYou entered: ");
    putchar(a);
    fflush(stdin);
    printf("\nEnter a character: ");
    a = getc(stdin);
    printf("\nYou entered: ");
    putchar(a);
    return 0;
}
