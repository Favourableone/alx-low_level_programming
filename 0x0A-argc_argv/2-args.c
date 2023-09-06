#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments received
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success,non-zero on failure
 */
int main(int argc, char *argv[])
{
int i; for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
