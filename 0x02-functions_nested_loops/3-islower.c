#include "holberton.h"
/**
* main- int
* description: lowercase or not
* Return: 0, 1
*/

int _islower(int c)
{
if ('a' <= c <= 'z')
{
return(1);
}
else
{
return(0);
}
}
