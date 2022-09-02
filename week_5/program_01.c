/* Write a C program to count total number of digits of an Integer number (N). */


#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N); /*The number is accepted from the test case data*/

/* Complete the rest of the code. Please use the printf statements as below
by just changing the variables used in your program 

printf("The number %d contains %d digits.",N,count); */

   
    int d = 0, real = N;

    while (N > 0){
        N = (int)N / 10;
        d++;
    }

    printf("The number %d contains %d digits.", real, d);
    return 0;
}
