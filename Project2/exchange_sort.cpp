int exsort(int n, int a[])
{
    int i, j, k, min;
    for (i = 0; i < n; i++)
    {
        min = a[i];
        for (j = i; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                a[j] = a[i];
                a[i] = min;
            }

        }
    }
    return 0;
}