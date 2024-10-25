#include <stdio.h>
int main()
{
    /*递推公式呜呜呜呜呜！！头都想秃了x[n]=(x[n-1]+k)%n*/
    int x[20000];
    int n, k;
    scanf("%d %d", &n, &k);
    x[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        x[i] = (x[i - 1] + k) % i;
    }
    printf("%d", x[n] + 1);
    return 0;
}