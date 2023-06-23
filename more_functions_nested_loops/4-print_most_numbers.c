#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - do not print 2 4
 *
 * Return: value of print most numbers
 */

void print_most_numbers(void)

{
  char s[] = "0123456789";
  int x;

  for (x=0;x<=9;x++)

    if (x!=2 && x!= 4)
      {
	putchar(s[x]);

      }


  putchar('\n');


}



/*on peut le code d'autre maniere
//#include <stdio.h>

//int main()
{
  char s[] = "01356789";
  int x;
  
     
      
  for (x=0;x<=9;x++) 

               putchar(s[x]);
                putchar('\n');
         
         return 0;
}

autre maniere

//#include <stdio.h>
// void main (void)
{
int a = 0;

for (a = 48; a <= 57; a++)
{
if (a != 50 && a != 52)
{
putchar(a);
}
}
putchar('\n');
}
*/

