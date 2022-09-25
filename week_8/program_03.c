/*
Write a program to calculate the sum of a given series
1 + 1/2^2 + 1/3^3 + 1/4^4 + ... + 1/n^n till n-th term
*/


#include <math.h> //For using the pow() to calculate power 
#include <stdio.h> 
double Series_Sum(int n); /* function for calculation the series sum */
int main()
{
    int n;
    scanf("%d", &n); 
    double Result;
    Result = Series_Sum(n);
 
    printf("The sum of the series is = %.6f\n", Result);
    return 0;
}


double Series_Sum(int n) {
	  float ans = 0;
  	for(int i=1; i<=n; i++) ans += 1 / pow(i, i);
  	return ans;
}
