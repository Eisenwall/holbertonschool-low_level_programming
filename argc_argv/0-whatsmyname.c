#include <stdio.h>
/**
 * main - Prints the name of the program (with path)
 * @argc: argument count (unused)
 * @argv: argument vector (array of strings)
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    (void)argc;
    printf("%s\n", argv[0]);
    return (0);
}
