#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);
int main()
{
	int arr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };   // 정렬되지 않은 배열

	ft_sort_int_tab(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);    // 1 2 3 4 5 6 7 8 9 10
	}

	printf("\n");

	return 0;
}
