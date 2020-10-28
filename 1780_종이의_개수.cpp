#include<iostream>
using namespace std;
int map[2188][2188];

int t_cnt_n1;
int t_cnt_0;
int t_cnt_1;

int cnt_n1 = 0;
int cnt_0 = 0;
int cnt_1 = 0;

void NinePaper(int x, int y, int n)
{
	t_cnt_n1 = 0, t_cnt_0 = 0, t_cnt_1 = 0;

	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (map[i][j] == -1)
			{
				t_cnt_n1++;
			}
			else if (map[i][j] == 0)
			{
				t_cnt_0++;
			}
			else
			{
				t_cnt_1++;
			}
		}
	}

	if (t_cnt_n1 == n * n)
	{
		cnt_n1++;
	}
	else if (t_cnt_0 == n * n)
	{
		cnt_0++;
	}
	else if (t_cnt_1 == n * n)
	{
		cnt_1++;
	}
	else
	{
		if (n <= 1)
		{
			return;
		}
		else
		{
			NinePaper(x, y, n / 3);
			NinePaper(x + ((n / 3) * 1), y, n / 3);
			NinePaper(x + ((n / 3) * 2), y, n / 3);

			NinePaper(x, y + ((n / 3) * 1), n / 3);
			NinePaper(x + ((n / 3) * 1), y + ((n / 3) * 1), n / 3);
			NinePaper(x + ((n / 3) * 2),  y + ((n / 3) * 1), n / 3);

			NinePaper(x, y + ((n / 3) * 2), n / 3);
			NinePaper(x + ((n / 3) * 1), y + ((n / 3) * 2), n / 3);
			NinePaper(x + ((n / 3) * 2), y + ((n / 3) * 2), n / 3);

		}
		//for (int a = 0; a < 3; a++)
		//{
		//	for (int b = 0; b < 3; b++)
		//	{
		//		NinePaper(x + ((n / 3) * a), y + ((b / 3) * b), n / 3);
		//	}
		//}
	}

	return;
}

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}

	NinePaper(0, 0, N);

	cout << cnt_n1 << '\n' << cnt_0 << '\n' << cnt_1;
	return 0;
}