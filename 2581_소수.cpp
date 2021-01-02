#include<iostream>
#include<vector>
using namespace std;

vector<int> v;
int N, M;
int t_count;
int result = 0;

int main(void)
{
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		t_count = 0;

		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
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
			v.push_back(i);
			result += i;
		}
	}

	if (v.empty())
	{
		cout << "-1";
	}
	else
	{
		cout << result << endl;
		cout << v[0];
	}

	return 0;
}