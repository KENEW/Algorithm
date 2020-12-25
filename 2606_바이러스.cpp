#include<iostream>
#include<queue>
#define endl " "
using namespace std;

queue<int> q;
int arr[101][101] = {0, };
int visited[101] = {0, };
int N;
int C;
int result = 0;

void BFS(int index)
{

	visited[index] = 1;
	q.push(index);

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		for (int i = 1; i <= N; i++)
		{
			if (arr[node][i] && !visited[i])
			{
				q.push(i);
				result++;
				visited[i] = 1;

			}
		}
	}
}

int main(void)
{
	cin >> N >> C;

	for (int i = 1; i <= C; i++)
	{
		int n1, n2;
		cin >> n1;
		cin >> n2;

		arr[n1][n2] = arr[n2][n1] = 1;
	}

	BFS(1);

	cout << result;

	return 0;
}