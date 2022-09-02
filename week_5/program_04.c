/* 
Write a C program to print the following Pyramid pattern upto Nth row. Where N (number of rows to be printed) is taken as input.
For example when the value of N is 5 the pyramid will be printed as follows

*****
****
***
**
*

*/



#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N); /*The value of N is taken as input from the test case */


    for(int i=N; i>0; i--){
        for(int j=i; j>0; j--) printf("*"); 
        printf("\n");
    }

    return 0;
}
