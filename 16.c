#include<stdio.h>
int main(){
    int qty;
    float rate,tot,dis=0;
    printf("enter qty & rate : ");
    scanf("%d%f",&qty,&rate);
    if(qty>1000){
        tot = qty*rate;
        dis=0.10*tot;
            printf("your total dis is %f \n",dis);
    }
    else
        printf("there is no discount on your purchase \n");
    tot=rate*qty-dis;
    printf("your total expence is : %f \n",tot);
    return 0;
}