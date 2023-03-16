#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
float b;
long int li;
long long int d;
char c;
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an integer : %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long integer : %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long integer: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float : %lu byte(s)\n", (unsigned long)sizeof(b));
return (0);
}
