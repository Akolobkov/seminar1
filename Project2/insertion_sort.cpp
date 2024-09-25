template <typename T>
int inssort(int n, T a[]) {
	int i, j;
	T k;
	for (i = 1; i < n; i++)
		for (j = i; j > 0 && a[j - 1] > a[j]; j--) 
		{
			k = a[j - 1];
			a[j - 1] = a[j];
			a[j] = k;
		}
	return 0;
}
