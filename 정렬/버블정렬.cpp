#include<iostream>
using namespace std;

void bubblesort(int n, int* arr)
{
	for(int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void selectsort(int n, int* arr)
{
	int i, j, min;
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}

		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

void insertionsort(int n, int* arr)
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
			
		}

		arr[i + 1] = key;
	}
}

void quicksort(int* arr, int l, int r)
{
	if (l < r)
	{
		int p = partition(arr, l, r);

		quicksort(arr, l, p - 1);
		quicksort(arr, p + 1, r);
	}
}

int partition(int* arr, int l, int r)
{
	int pivot = arr[r];
	int i = (l - 1);

	for (int j = l; j <= r - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;

			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}

	int temp = arr[i + 1];
	arr[r] = arr[i + 1];
	arr[i + 1] = temp;

	return i + 1;
}

int main(void)
{
	int n;

	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	selectsort(n, arr);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}