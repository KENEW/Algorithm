#include<iostream>
#include<algorithm>
using namespace std;

constexpr int MAX = 101;
constexpr int INF = 100000000;

int N, K;
int DP[10001];
int coin[MAX];

int main(void)
{
	DP[0] = 0;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		cin >> coin[i];
	}

	for (int i = 1; i <= K; i++)
	{
		DP[i] = INF;
	}

	for(int i = 1; i <= N; i++)
	{
		for (int j = coin[i]; j <= K; j++)
		{
			if (DP[j - coin[i]] + 1 < DP[j])
			{
				DP[j] = DP[j - coin[i]] + 1;
			}
		}
	}

	//�Ʊ���.. ����� �Ұ����Ѱ�쿡�� üũ������Ѵ�. �̰� ���ô�..
	if (DP[K] == INF)
	{
		cout << -1;
	}
	else
	{
		cout << DP[K];
	}

	return 0;
}