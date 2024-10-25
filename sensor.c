#include <stdio.h>
int main()
{
    int pre;
    double frac, factor;
    char name[20];
    char unit = 'a';

    scanf("%s %d %lf %lf %c", name, &pre, &frac, &factor, &unit);

    double conv = (pre + frac) * factor;
    char new_unit = unit - 'a' + 'A';

    printf("%.2s: %d (%.5f) | %.5E %.5f %c", name, pre, frac, pre + frac, conv, new_unit);
    return 0;
}