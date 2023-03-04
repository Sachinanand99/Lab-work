#include<stdio.h>
int main(){
    char light;
    printf("Enter the color of traffic light : ");
    scanf("%c", &light);
    switch (light)
    {
    case 'R':
    case 'r':
        printf("STOP!");
        break;
    case 'Y':
    case 'y':
        printf("CAUTION!");
        break;
    case 'G':
    case 'g':
        printf("GO!");
        break;
    default:
        break;
    }
}