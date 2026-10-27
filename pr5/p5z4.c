#include <stdio.h>

#define RAZMER 8

int main(void)
{
    double massiv[RAZMER];
    double stepen = 1.0;
    int i;

    for (i = 0; i < RAZMER; i++)
    {
        massiv[i] = stepen;
        stepen = stepen * 3.0;
    }

    for (i = 0; i < RAZMER; i++)
        printf("%.2f ", massiv[i]);
    printf("\n");

    for (i = RAZMER - 1; i >= 0; i--)
        printf("%.2f ", massiv[i]);
    printf("\n");
    return 0;
}
