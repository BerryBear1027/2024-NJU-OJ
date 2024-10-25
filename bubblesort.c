#include <stdio.h>
int main()
{
    int T, n;
    int a[50000];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int q = 1;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int k = 0; k < n - 1; k++)
        {
            if (a[k] > a[n - 1])
                q = 0;
        }
        if (q == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
