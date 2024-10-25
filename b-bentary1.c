#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, len, sum;
    char str[20];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        int sure = 1;
        scanf("%s", str);
        len = strlen(str);
        for (int j = 0; j < len; j++)
        {
            if (str[j] != '1' && str[j] != '0' && str[j] != 'Z')
            {
                printf("Radix Error\n");
                sure = 0;
                break;
            }
        }
        if (sure)
        {
            for (int m = 0; m < len; m++)
            {
                int x = 0;
                if (str[m] == 'Z')
                    x = -1;
                else if (str[m] == '1')
                    x = 1;
                sum += x * pow(3, len - m - 1);
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}
