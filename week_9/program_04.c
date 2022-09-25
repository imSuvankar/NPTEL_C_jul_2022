// Write a C program to reverse an array by swapping the elements and without using any new array.


#include <stdio.h>
int main() {
    int array[100], n, c;
    scanf("%d", &n); // n is number of elements in the array.
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }

  
    for(int i=0, j=n-1; i<(int)n/2, j>=(int)n/2; i++, j--) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    } 
  
  
    printf("Reversed array elements are:\n");

    for (c = 0; c < n; c++) 
    {
        printf("%d\n", array[c]);
    }
    return 0;
} 
