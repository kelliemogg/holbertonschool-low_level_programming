#include "holberton.h"
/**
* _islower - alksdfj
* description: lowercase or not
* Return: 0, 1
*/

int _islower(int c)
{
if (('a' <= c) && (c <= 'z'))
{
return(1);
}
else
{
return(0);
}
}
