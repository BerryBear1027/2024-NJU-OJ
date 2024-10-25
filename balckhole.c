#include <stdio.h>
int main()
{
    int N, a, b, c, d;
    int sum = 0;
    int Nmax, Nmin;
    scanf("%d", &N);
    while (N != 495)
    {
        a = N / 100;
        b = (N % 100) / 10;
        c = N % 10;
        if (a >= b && b >= c)
        {
            Nmax = 100 * a + 10 * b + c;
            Nmin = 100 * c + 10 * b + a;
        }
        else if (a >= c && c >= b)
        {
            Nmax = 100 * a + 10 * c + b;
            Nmin = 100 * b + 10 * c + a;
        }
        else if (b >= a && a >= c)
        {
            Nmax = 100 * b + 10 * a + c;
            Nmin = 100 * c + 10 * a + b;
        }
        else if (b >= c && c >= a)
        {
            Nmax = 100 * b + 10 * c + a;
            Nmin = 100 * a + 10 * c + b;
        }
        else if (c >= a && a >= b)
        {
            Nmax = 100 * c + 10 * a + b;
            Nmin = 100 * b + 10 * a + c;
        }
        else
        {
            Nmax = 100 * c + 10 * b + a;
            Nmin = 100 * a + 10 * b + c;
        }
        d = N - (Nmax - Nmin);
        if (d < 0)
        {
            d = 0;
        }
        sum += d;
        N = Nmax - Nmin;
    }
    printf("%d", sum);
    return 0;
}
