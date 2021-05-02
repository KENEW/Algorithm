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

		//����
		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);

		//����
		Merge(arr, l, m, r);
	}
}

void Merge(int * arr, int l, int m, int r)
{
	int b[1000];

	int i = l;
	int j = m + 1;
	int k = 0;

	//������ ������ ������
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

	//������ ����
	while (i <= m)
	{
		b[k] = arr[i];
		k++;
		i++;
	}

	//�������� ����
	while (j <= r)
	{
		b[k] = arr[j];
		k++;
		j++;
	}

	k--;	//k�� �� �ε����� ����Ű�� �־ 1��ŭ �������ش�.

	//����
	while (k >= 0)
	{
		arr[l + k] = b[k];
		k--;
	}
}