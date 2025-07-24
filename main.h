#ifndef MYHEADER_H
#define MYHEADER_H

/**
 * _printf - a replica of printf function
 * @format: string to be printed
 * @...: variables
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...);

/**
 * to_string - a funciton that converts a number to a string
 * @n: the number to be converted
 *
 * Return: the converted string
 */
char *to_string(int n);

/**
 * rev_str - a funciton that reverse a string
 * @str: the string to be reversed
 *
 * Return: NULL
 */
void rev_str(char *str);

/**
 * str_len - a function that returns the length of a string
 * @str: the string
 *
 * Return: length of the string
 */
int str_len(char *str);

#endif
