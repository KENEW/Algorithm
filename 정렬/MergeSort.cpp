#include<iostream>
using namespace std;

#define MAX 6

int main(void)
{
	int a[MAX] = {20, 10, 70, 80, 40, 90};

	MergeSort(a, 0, MAX - 1);
}

void MergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2; //(l + r) / 2

		//분할
		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);

		//정복
		Merge(arr, l, m, r);
	}
}

void Merge(int * arr, int l, int m, int r)
{
	int b[1000];

	int i = l;
	int j = m + 1;
	int k = 0;

	//한쪽이 전멸할 때까지
	while (i <= m && j <= r)
	{
		if (arr[i] <= arr[j])
		{
			b[k] = arr[i];
			i++;
		}
		else
		{
			b[k] = arr[j];
			j++;
		}

		k++;
	}

	//왼쪽이 전멸
	while (i <= m)
	{
		b[k] = arr[i];
		k++;
		i++;
	}

	//오른쪽이 전멸
	while (j <= r)
	{
		b[k] = arr[j];
		k++;
		j++;
	}

	k--;	//k가 빈 인덱스를 가리키고 있어서 1만큼 감소해준다.

	//정렬
	while (k >= 0)
	{
		arr[l + k] = b[k];
		k--;
	}
}