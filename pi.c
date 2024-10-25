#include <stdio.h>
#include <math.h>
int main()
{
    double s61 = sqrt(61);
    double a = 236674 + 30303 * s61;
    double b = pow(5280, 3) * pow(a, 3) + 744;
    double c = log(b);
    double d = c / sqrt(427);

    double x = 6 * atan(1.0 / 8);
    double y = 2 * atan(1.0 / 57);
    double z = atan(1.0 / 239);
    double u = 4 * (x + y + z);

    printf("%.15f\n", d);
    printf("%.15f", u);
    return 0;
}