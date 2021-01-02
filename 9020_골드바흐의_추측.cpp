#include<iostream>
using namespace std;

int arr[40001];
int N, T;

int main(void)
{
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N;

		for (int j = 2; j <= N; j++)
		{
			arr[j] = j;
		}

		for (int j = 2; j <= N; j++)
		{
			if (arr[j] == 0)
			{
				continue;
			}

			for (int k = j * 2; k <= N; k += j)
			{
				arr[k] = 0;
			}
		}

		for (int j = N / 2; j >= 0; j--)
		{
			if (arr[j] != 0)
			{
				int t_half = N - arr[j];

				if (arr[t_half] == 0)
				{
					continue;
				}

				cout << arr[j] << " " << t_half << endl;
				break;
			}
		}
	}

	return 0;
}