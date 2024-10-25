#include <stdio.h>
#include <math.h>
int main()
{
    const double R = 8.314;
    double P, L, T, n, V;
    scanf("%lf %lf %lf", &P, &L, &T);
    V = pow(L, 3);
    n = P * V / (R * T);
    printf("%.4e", n);
    return 0;
}
