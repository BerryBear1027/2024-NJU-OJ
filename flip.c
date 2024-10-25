#include <stdio.h>
int main()
{
    int n = 0;
    int a[2000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % k == 0)
            {
                if (a[i] == 0)
                    a[i] = 1;
                else if (a[i] == 1)
                    a[i] = 0;
            }
        }
    }
    for (int k = 1; k <= n; k++)
    {
        if (a[k] == 1)
            printf("%d ", k);
    }
    return 0;
}