#include <stdio.h>
#include <math.h>

int main(void)
{
    double nach = 1.0, kon = 10.0, shag = 1.0;
    double znach, rez;
    int nomer = 1;

    printf("N X Y\n");
    for (znach = nach; znach <= kon + 0.000001; znach = znach + shag)
    {
        rez = cbrt(znach);
        printf("%d %.4f %.4f\n", nomer, znach, rez);
        nomer = nomer + 1;
    }
    return 0;
}
