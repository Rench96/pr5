#include <stdio.h>

#define HEIGHT 5
#define WIDTH 5

int main(void)
{
    int i, j;
    int seredina = HEIGHT / 2;

    for (i = 0; i <= seredina; i++)
    {
        for (j = 0; j < seredina - i; j++)
            printf(" ");
        for (j = 0; j < WIDTH - (seredina - i); j++)
            printf("<");
        printf("\n");
    }
    for (i = seredina + 1; i < HEIGHT; i++)
    {
        for (j = 0; j < i - seredina; j++)
            printf(" ");
        for (j = 0; j < WIDTH - (i - seredina); j++)
            printf("<");
        printf("\n");
    }
    return 0;
}
