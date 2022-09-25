/*
Write a program to express a given integer as a Sum of Two Prime Numbers
For example if the number is 10
The result will be
10 = 3 + 7
10 = 5 + 5
*/



#include <stdio.h>
int checkPrime(int n);
int main() {
int n;
scanf("%d", &n);  //An integer number is taken from the test case

/* Complete the program
Use 
Use the printf statement as below:
printf("%d = %d + %d\n", n, variable1, variable2); */

  
  
	int flag = 0;

  	for (int i=2; i <= n/2; i++) {
    	if (checkPrime(i) == 1) {
      		if (checkPrime(n-i) == 1) {
        		printf("%d = %d + %d\n", n, i, n-i);
        		flag = 1;
      		}
    	}
  	}

  	if (flag == 0) printf("%d cannot be expressed as the sum of two prime numbers.", n);
  	
	return 0;
}



int checkPrime(int n) {
  	int check = 1;

  	if (n <= 1) check = 0;

  	else {
    	for(int i = 2; i <= n/2; ++i) {
      		if(n % i == 0) {
        		check = 0;
        		break;
      		}
    	 }
  	}
  	return check;
} 
