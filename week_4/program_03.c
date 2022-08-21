/* Write a C program to calculate the Sum of First and the Last Digit of a given Number.
For example if the number is 1234 the result is 1+ 4 = 5. */


#include <stdio.h>
int main()
{

    int N, First_digit, Last_digit;

    scanf("%d", &N); //The number is accepted from the test case
  
  
  
    First_digit = N;

    while(First_digit > 10) First_digit /= 10;

    Last_digit = N % 10;
  
  
  
    printf("Sum of First and Last digit = %d", First_digit + Last_digit);

    return 0;
}
