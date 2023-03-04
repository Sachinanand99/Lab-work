#include <stdio.h>
int main(){
    int i, j, k, l;
    l = 1;
    for (i=0; i<5; i++){
        for(j=3-i; j>=0; j--){
            printf(" ");
        }
        for(k=1; k<=l; k++){
            printf(" *");
        }
        printf("\n");
        l+=1;
    }
    return 0;
}