#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n + 1];
    int sum[n + 1];
    int need[n + 1];
    int last = 0;
    for (int i = 0; i < n + 1; i++)
    {
        scanf("%d", &x[i]);
    }
    sum[0] = 0;
    need[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        sum[i] = sum[i - 1] + x[i - 1];
        if (sum[i] < i && x[i] != 0)
        {
            need[i] = i - sum[i];
        }
        else
            need[i] = 0;
        sum[i] += need[i];
        last += need[i];
    }
    printf("%d", last);
    return 0;
}