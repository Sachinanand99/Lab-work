#include<stdio.h>
#include<math.h>
int num[]={};
int s=0;
int sum(int num){
    s += num;
    return s;
}
float avg(float out){
    float av=out/5;
    return av;
}
float stddev(float out){
    float var=0.0;
    for (int i=0; i<5; i++) {
        var+=pow(num[i]-out, 2);
    }
    var/=5;
    out=sqrt(var);
    return out;
}
int main(){
    float out;
    for(int i=0; i<5; i++){
        printf("Enter %d number : ", i+1);
        scanf("%d", &num[i]);
        int temp = num[i];
        out = sum(temp);
    }
    printf("sum of the numbers is %.2f\n", out);
    out = avg(out);
    printf("Average of the numbers is %.2f\n", out);
    out = stddev(out);
    printf("Standard Deviation of the numbers is %.2f\n", out);
}