#include<iostream>
using namespace std;

int arr[1000001];
int N;
int result = 0;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i = 2; i <= N; i++)
	{
		arr[i] = i;
	}

	for (int i = 2; i <= N; i++)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		
		for (int j = i * 2; j <= N; j += i)
		{
			arr[j] = 0;
		}
	}
	
	for (int i = 2; i <= N; i++)
	{
		if (arr[i] != 0)
		{
			if (N % arr[i] == 0)
			{
				N = N / arr[i];
				cout << arr[i] << endl;

				if (N == 1)
				{
					break;
				}

				i = 1;
			}
		}
	}

	return 0;
}