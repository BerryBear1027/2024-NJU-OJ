#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[2001];
    scanf("%s", str);
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (str[i] == '?')
            str[i] = str[j];
        if (str[j] == '?')
            str[j] = str[i];
    }
    printf("%s", str);
    return 0;
}