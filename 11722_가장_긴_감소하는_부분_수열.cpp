#include<iostream>
#include<algorithm>
using namespace std;

int N;
int arr[1001];
int length[1001];
int result = 0;

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = N - 1; i >= 0; i--)
	{
		length[i] = 1;

		for (int j = N - 1; j >= i; j--)
		{
			if (arr[i] > arr[j])
			{
				length[i] = max(length[i], length[j] + 1);
			}
		}

		result = max(result, length[i]);
	}

	cout << result;
	return 0;
}