#include <stdio.h>
/**
 * main - Entry point
 * Description: Lists all the natural numbers below 1024
 * Return: always 0
 */
int main(void)
{
        int a;
        int sum = 0;
        for (a = 0; a < 1024; a++)
        {
                if ((a % 3) == 0 || (a % 5) == 0)
                        sum += a;
        }
        printf("%d\n", sum);
        return (0);
}
