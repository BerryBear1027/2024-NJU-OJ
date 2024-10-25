#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n = 0, len, no = 0;
    char a[15];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        len = strlen(a);
        no = 0;
        for (int f = 0; f < len; f++)
        {
            if (!isdigit((unsigned char)a[f]) && a[f] != '-')
            {
                printf("Radix Error\n");
                no = 1;
                break;
            }
        }

        if (no)
            continue;
        int num = atoi(a);
        if (num == 0)
        {
            printf("0\n");
            continue;
        }
        int keep;
        if (num < 0)
            keep = -num;
        else
            keep = num;
        int result[40] = {0};
        int baka = 0;
        while (keep != 0)
        {
            int yu = keep % 3;
            keep = keep / 3;
            if (yu == 2)
            {
                result[baka++] = 5;
                keep++;
            }
            else
            {
                result[baka++] = yu;
            }
        }
        if (num > 0)
        {
            for (int h = baka - 1; h >= 0; h--)
            {
                if (result[h] == 5)
                {
                    printf("Z");
                }
                else
                {
                    printf("%d", result[h]);
                }
            }
        }
        else
        {
            for (int h = baka - 1; h >= 0; h--)
            {
                if (result[h] == 5)
                {
                    printf("1");
                }
                else if (result[h] == 1)
                {
                    printf("Z");
                }
                else
                {
                    printf("%d", result[h]);
                }
            }
        }

        printf("\n");
    }

    return 0;
}