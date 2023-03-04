#include<stdio.h>
int main(){
    char gen, qual;
    int yos, sal;
    printf("Enter your gender(m/f), qual(g, p), year of service : ");
    scanf("%c%c%d", &gen, &qual, &yos);
    if(gen == 'm'&& yos>=10&& qual=='p'){
        sal = 15000;
    }
    else if(gen == 'm'&& yos>=10&& qual == 'g'){
        sal = 10000;
    }
    else if(gen == 'm'&& yos<10&& qual == 'p'){
        sal = 10000;
    }
    else if(gen == 'm'&& yos<10&& qual == 'g'){
        sal = 7000;
    }
    else if(gen == 'f' && yos>=10&& qual =='p'){
        sal = 12000;
    }
    else if(gen == 'f' && yos>=10&& qual == 'g'){
        sal = 9000;
    }
    else if(gen == 'f' && yos<10&& qual == 'p'){
        sal = 10000;
    }
    else if(gen == 'f' && yos<10&& qual == 'g'){
        sal = 6000;
    }
    else{
        sal = 0;
    }
    printf("%d is your salary.", sal);
    return 0;
}
