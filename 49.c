#include<stdio.h>
int main(){
    int watts, lifespan;
    printf("Enter watts : ");
    scanf("%d", &watts);
    switch (watts)
    {
    case 25:
        lifespan=2500;
        break;
    case 40:
    case 60:
        lifespan = 1000;
        break;
    case 75:
        lifespan=700;
        break;
    default:
        lifespan = 0;
        break;
    }
    printf("Lifespan is %d.", lifespan);
    return 0;
}