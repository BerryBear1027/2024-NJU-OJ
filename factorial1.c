#include <stdio.h>
int main()
{
    int c = 0;
    int a = 0;
    int f = 1;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        f = (f * i) % 10007;
        c = (c + f) % 10007;
    }

    printf("%d\n", c);
    return 0;
}
