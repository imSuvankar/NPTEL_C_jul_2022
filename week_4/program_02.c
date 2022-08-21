/* Write a program to find whether a given character is a Vowel or consonant. A character is taken as input. The character may be in Upper Case or in Lower Case. */



#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);  /* It reads a character from the input cases and store it in ch */

/* Complete the program. Use the printf statement given below to match your 
output exactly with the test cases. 

printf("%c is a vowel.", ch);
printf("%c is a consonant.", ch);

*/

  
    (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') ?
        printf("%c is a vowel.", ch) :
        printf("%c is a consonant.", ch);
	
	return 0;
}
