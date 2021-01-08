#include<iostream>
#include<algorithm>
using namespace std;

int N;
int length[1001];
int arr[1001];
int result = 0;

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for(int k = 0; k < N; k++)
	{
		length[k] = 1;

		for (int i = 0; i < k; i++)
		{
			if (arr[i] < arr[k])
			{
				length[k] = max(length[k], length[i] + 1);
			}
		}

		result = max(result, length[k]);
	}

	cout << result;
	return 0;
}