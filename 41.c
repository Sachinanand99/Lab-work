#include<stdio.h>
int main(){
    int i, j, k, l, m;
    char a[]={'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    for (i = 0; i<=6; i++){
        for(j=0; j<7-i; j++){
            if (j>5){
                continue;
            }
            else{
                printf("%c", a[j]);
            }
        }
        for(k=0; k<2*i-1; k++){
            printf(" ");
        }
        for (l = 6-i; l>=0; l--){
            printf("%c", a[l]);
        }
        printf("\n");
    }
}