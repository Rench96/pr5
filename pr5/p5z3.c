#include <stdio.h>

int main(void)
{
    int kol, i, k;
    double summa, fakt, stepen;

    printf("Vvedite N: ");
    while (scanf("%d", &kol) == 1 && kol > 0)
    {
        summa = 0.0;
        for (i = 1; i <= kol; i++)
        {
            fakt = 1.0;
            stepen = 1.0;
            for (k = 1; k <= i; k++)
            {
                fakt = fakt * k;
                stepen = stepen * i;
            }
            summa = summa + fakt / stepen;
        }
        printf("SUM: %.6f\n", summa);
        printf("Vvedite N: ");
    }
    return 0;
}
