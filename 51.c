#include<stdio.h>
#include<math.h>
int main(){
    int init=0, opt;
    while(init==0){
        printf("\nEnter 1 for checking for prime number\n");
        printf("Enter 2 for checking for armstrong number\n");
        printf("Enter 3 for finding the factorial of the number\n");
        printf("Enter 4 for exiting : ");
        scanf("%d", &opt);
        if (opt==1){
            int i, n;
            printf("Enter any number : ");
            scanf("%d", &n);
            i = 2;
            for(i = 2; i<n; i++){
                if(n%i == 0)
                break;
            }
            if(i == n){
                printf("It is a prime number.");
            }
            else{
                printf("It is not a prime number.");
            }
        }
        else if(opt==2){
            int num, num1, num2, sum, count, a;
            printf("Enter any number : ");
            scanf("%d", &num);
            num1 = num;
	        num2 = num;
	        count = 0;
	        while(num1!=0){
                count++;
	        	num1 /= 10;
	        }
	        sum = 0;
	        while(num2!=0){
	        	a = num2%10;
	        	sum += pow(a, count);
	        	num2 /=10;
	        }
	        if (sum == num){
	        	printf("%d is an armstrong number.", sum);
	        }
            else{
                printf("It is not an armstrong number.");
            }
        }
        else if(opt==3){
            int num, i, fact;
            printf("Enter a number : ");
            scanf("%d", &num);
            fact = i = 1;
            while(i <= num){
                fact = fact*i;
                i++;
            }
            printf("Factorial value of %d = %d\n", num, fact);
        }
        else if(opt==4){
            printf("You have given wrong input try again.")
            init=1;
        }
        else{
            continue;
        }
    }
    return 0;
}