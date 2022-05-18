#include <stdio.h>

void tomb_kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
    
}

int sum(const int n, const int tomb[])
{
    int osszeg = 0;

    for (int i = 0; i < n; i++)
    {
        osszeg += tomb[i];
    }

    return osszeg;
    
}

double avg(const int n, const int tomb[])
{
    return (double)sum(n, tomb) / (double)n;
    
}

int main()
{
    int szamok[10] = {5, 4, 93, 35, 0, -2, -34, 45, 7, 3};
    int meret = 10;

    tomb_kiir(meret, szamok);
    int osszeg = sum(meret, szamok);
    printf("Osszeg: %d\n", osszeg);

    double atlag = avg(meret, szamok);
    printf("Atlag: %.2lf\n", atlag);

    return 0;
}
