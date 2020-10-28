#include<iostream>
using namespace std;
char map[65][65];

void QuardTree(int x, int y, int n)
{
	int t_cnt = 0;

	for (int i = x; i < n + x; i++)
	{
		for (int j = y; j < n + y; j++)
		{
			if (map[i][j] == '1')
			{
				t_cnt++;
			}
		}
	}

	if (t_cnt == 0)
	{
		cout << "0";
	}
	else if (t_cnt == n * n)
	{
		cout << "1";
	}
	else
	{
		cout << "(";
		QuardTree(x, y, n / 2);
		QuardTree(x, y + (n / 2), n / 2);
		QuardTree(x + (n / 2), y, n / 2);
		QuardTree(x + (n / 2), y + (n / 2), n / 2);
		cout << ")";
	}


	return;
}

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> map[i][j];
		}
	}

	QuardTree(0, 0, N);

	return 0;
}