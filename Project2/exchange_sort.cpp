template <typename T>
int exsort(int n, T a[])
{
    int i, j;
    T min;
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