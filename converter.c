#include "main.h"

/**
 * convert - converts number and base to string
 * @num: number
 * @base: base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
    static char *rep;
    static char buffer[50];
    char *ptr;

    rep = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
    ptr = &buffer[49];
    *ptr = '\0';
    do
    {
        *--ptr = rep[num % base];
        num /= base;
    } while (num != 0);
    return (ptr);
}
