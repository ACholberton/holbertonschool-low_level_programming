#include <stdio.h>

/**
 * main - it causes an infinite loop
 * Return: 0
 */

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }
/* there is a missing increment between line 18 and 19 */
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
