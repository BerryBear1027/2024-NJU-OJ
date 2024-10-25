{
    int n;
    int a[100005] = {0};
    int x[1000090] = {0};
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++)
    {
        scanf("%d", &a[i]);
        x[a[i]]++;
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (x[a[i]] == 1)
        {
            printf("%d", a[i]);
        }
    }
    return 0;
}