#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

int N;
priority_queue<int, vector<int>, greater<int>> pq;
int arr[100001];

int main(void)
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == 0)
		{
			if (!pq.empty())
			{
				printf("%d\n", pq.top());
				pq.pop();
			}
			else
			{
				printf("0\n");
			}
		}
		else
		{
			pq.push(arr[i]);
		}
	}
	return 0;
}