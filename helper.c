#include "main.h"
#include <stdlib.h>

/**
 * helper - a file that contains funcitons that helps the printf function
 *
 */

/**
 * to_string - a funciton that converts a number to a string
 * @n: the number to be converted
 *
 * Return: the converted string
 */
char *to_string(int n)
{
	int temp = n, len = 0,sign = 0;
    	char *str;

	if (n == 0)
	{
        	str = malloc(2);
	        if (!str) return NULL;
        	str[0] = '0';
	        str[1] = '\0';
        	return str;
    	}
	 if (n < 0)
	 {
        	sign = 1;
	        n = -n;
	 }
    
	 temp = n;
    	while (temp > 0)
    	{
        	temp /= 10;
	        len++;
    	}
	str = malloc(len + sign + 1);
	if (!str) return NULL;
	
	str[len + sign] = '\0';

    	while (n > 0)
    	{
        	str[--len + sign] = (n % 10) + '0';
	        n /= 10;
    	}

    	if (sign)
        	str[0] = '-';
	return (str);
}

/**
 * rev_str - a funciton that reverse a string
 * @str: the string to be reversed
 *
 * Return: NULL
 */
void rev_str(char *str)
{
	int len, i = 0;

	len = str_len(str);
	while(len >= 0)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	
}


/**
 * str_len - a function that returns the length of a string
 * @str: the string
 *
 * Return: length of the string
 */
int str_len(char *str)
{
	int i;

	while(str[i] != '\0')
		i++;
	return (i);
}
