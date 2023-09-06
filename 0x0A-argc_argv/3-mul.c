#include <stdio.h>
#include "main.h"
/**
 * main - Prints multiplication of two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
int num1 = 0, num2 = 0, i;

if(argc < 3)
{
printf("Error: Insufficient arguments\n");
return (1);
}
for(i = 0; argv[1][i]; i++) {
num1 = num1 * 10 + (argv[1][i] - '0');
}
for(i = 0; argv[2][i]; i++)
{
num2 = num2 * 10 + (argv[2][i] - '0');
}
if (num2 == 0)
{
printf("0\n");
return (0);
}
printf("%d\n", num1 * num2);
return (0);
}
