#include <stdio.h>
#include <math.h>
int main()
{
    int p, q;
    double x, a, b, c, d, e;
    scanf("%d %d", &p, &q);
    a = pow(q / 2.0, 2) + pow(p / 3.0, 3);
    b = sqrt(a) - q / 2.0;
    c = cbrt(b);
    d = -q / 2.0 - sqrt(a);
    e = cbrt(d);
    x = c + e;
    printf("%.3f", x);
    return 0;
}