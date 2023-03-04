#include<stdio.h>
#include<math.h>
int main(){
	int num, temp, a, sum;
	for(num = 1; num<=1000; num++){
	    temp = num;
	    int count = 0;
	    while(temp!=0){
            count++;
	    	temp /= 10;
	    }
	    temp = num;
	    sum = 0;
	    while(temp!=0){
	    	a = temp%10;
	    	sum += pow(a, count);
	    	temp /=10;
	    }
	    if (sum == num){
	    	printf("%d\t", sum);
	    }
	}
	return 0;
}
