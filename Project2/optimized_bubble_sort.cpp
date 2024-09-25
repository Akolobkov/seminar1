template <typename T>
int opbubsort(int n, T a[]) {
    int i, j, s;
    T k;
    for (i = 0; i < n - 1; i++) {
        s = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
                s = 1;
            }
        }

        // Если на этой итерации не было обмена, то массив уже отсортирован
        if (s == 0) {
            break;
        }
    }
    return 0;
}