/*
Write a program to find 
b∫a x² dx 
using Trapezoidal rule with 10 segments between a and b.
The values of a and b will be taken from test cases.
*/


#include<stdio.h>
float func(float x);
int main()
{
  int n=10; //Taking n=10 sub intervals
  float a,b,integral; //integral is the integration result
  scanf("%f",&a); // initial limit taken from test case 
  scanf("%f",&b); // Final limit taken from test case

//Use the printf statement as printf("The integral is: %0.6f\n",integral);

  
  
  float h, x, sum = 0;

  if(b>a) h = (b-a)/n;
  else h = -(b-a)/n;

  for(int i=1; i<n; i++) {
    x = a+i*h;
    sum += func(x);
  }

  integral = (h/2) * (func(a) + func(b) + 2*sum);
  printf("The integral is: %0.6f\n",integral);
  return 0;
}


float func(float x) {
  return x*x; 
}
