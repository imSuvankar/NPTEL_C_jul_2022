/*
The velocity of a car at different time instant is given as
Time (0) 10 15 18 22 30
Velocity v(t) 22 26 35 48 68
A linear Lagrange interpolant is found using these data points. 
Write a C program to find the velocity of the car at different time instants. (Taken from test cases)
*/


#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68};
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a);  // This will be taken from test cases

    
  
  float k = 0;

  for (int i=0; i<5; i++) {
      
	float b = 1, c = 1;

	for(int j=0; j<5; j++) {
		
      if(j != i) {
		b *= a-t[j];
		c *= t[i]-t[j];
      }  
    }
    
	k += b/c * v[i];
  }
