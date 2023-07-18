#include <stdio.h>
/**
 * main - the alphabet in lowercase, and then in uppercase
 *
 * return: always 0 
 */
int main (void)
{
	     int ch;
             for (ch= 'a'; ch<= 'z'; ch++)
	     {
                  putchar(ch);
	     }
             for (ch= 'A'; ch<= 'Z'; ch++)
	     {
                  putchar(ch);
	     }
             putchar ('\n' ) ;
	     return (0);
}
