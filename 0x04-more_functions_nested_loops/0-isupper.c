#include <stdio.h>
#include <ctype.h>
int _isupper(int c)
{
    
    printf("Return value when uppercase character %c is passed to isupper(): %d", c, isupper(c));
    printf("\nReturn value when another character %c is passed to is isupper(): %d", c, isupper(c));

   return 0;
}
