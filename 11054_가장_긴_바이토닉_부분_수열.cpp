#include<iostream>
#include<algorithm>
using namespace std;

int N;
int arr[1001];

int length[1001];
int r_length[1001];

int result = 1;

int main(void)
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= N; i++)
	{
		length[i] = 1;

		for (int j = 1; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				length[i] = max(length[i], length[j] + 1);
			}
		}
	}

	for (int i = N; i >= 1; i--)
	{
		r_length[i] = 1;

		for (int j = N; j > i; j--)
		{
			if (arr[i] > arr[j])
			{
				r_length[i] = max(r_length[i], r_length[j] + 1);
			}
		}
	}

	for (int i = 0; i <= N; i++)
	{
		result = max(result, length[i] + r_length[i] - 1);
	}

	cout << result;
	return 0;
}