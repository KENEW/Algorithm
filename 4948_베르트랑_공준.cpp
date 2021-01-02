#include<iostream>
#define endl "\n";
using namespace std;

int arr[123456 * 2 + 1];
int result;
int N;
int M;

int main(void)
{
	cin.sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (1)
	{
		cin >> N;

		if(N == 0) 
		{
			break;
		}

		M = N * 2;
		result = 0;

		for (int i = 2; i <= M; i++)
		{
			arr[i] = i;
		}

		for (int i = 2; i <= M; i++)
		{
			if (arr[i] == 0)
			{
				continue;
			}

			for (int j = i * 2; j <= M; j += i)
			{
				arr[j] = 0;
			}
		}

		for (int i = N + 1; i <= M; i++)
		{
			if (arr[i] != 0)
			{
				result++;
			}
		}

		cout << result << endl;
	}
	
	return 0;
}