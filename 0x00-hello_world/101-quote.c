#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
        write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 41);
        return (1);
}
