template <typename T>
int selsort(int n, T a[])
{
    int i, j;
    T k;
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            k = a[i];
            a[i] = a[min];
            a[min] = k;
        }
    }
    return 0;
}