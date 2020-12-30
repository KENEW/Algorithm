#include<iostream>
#define MAX 1000001
using namespace std;

int N;
int DP[MAX] = {0, 1, 2, 3};

int main(void)
{
	cin >> N;

	for (int i = 3; i <= N; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2];
		DP[i] % 15746;
	}

	cout << DP[N];
	return 0;
}
