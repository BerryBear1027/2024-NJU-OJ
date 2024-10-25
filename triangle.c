#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b <= c)
    {
        printf("not triangle");
    }
    else if (a == b && b == c)
    {
        printf("equilateral triangle");
    }
    else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
    {
        printf("right triangle");
    }
    else if (pow(a, 2) + pow(b, 2) < pow(c, 2))
    {
        if (a == b || b == c)
        {
            printf("obtuse isosceles triangle");
        }
        else
            printf("obtuse triangle");
    }
    else
    {
        if (a == b || b == c)
        {
            printf("acute isosceles triangle");
        }
        else
            printf("acute triangle");
    }
    return 0;
}