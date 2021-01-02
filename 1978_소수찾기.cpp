#include<iostream>
using namespace std;

int N;
int num;
int cnt = 0;

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;

		if (num >= 2)
		{
			int t_count = 0;

			for (int j = 1; j <= num; j++)
			{
				if (num % j == 0)
				{
					t_count++;
				}
				if (t_count > 2)
				{
					break;
				}
			}

			if (t_count == 2)
			{
				cnt++;
			}
		}
	}

	cout << cnt;
	return 0;
}