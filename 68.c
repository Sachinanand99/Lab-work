#include <stdio.h>
void fib(int n1, int n2, int n3){
    for(;n3>0;n3--){
        int num = n1+n2;
        printf("%d\t", num);
        n1 = n2;
        n2 = num;
    }
}
int main(){
    int a = 1, b = 1;
    printf("%d\t%d\t", a, b);
    fib(a, b, 25);
    return 0;
}
