#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
#define MAX 20001
using namespace std;

int visited[MAX];
vector<int> map[MAX];

int T, V, E;

void DFS(int start)
{
	if (visited[start] == false)
	{
		visited[start] = 1;
	}
	for (int i = 0; i < map[start].size(); i++)
	{
		int next = map[start][i];

		if (visited[next] == false)
		{
			if (visited[start] == 1)
			{
				visited[next] = 2;
			}
			else
			{
				visited [next] = 1;
			}
			DFS(next);
		}
	}
}

bool MapCheck()
{
	for (int i = 1; i <= V; i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{
			if (visited[i] == visited[map[i][j]])
			{
				return 0;
			}
		}
	}

	return 1;
}
int main(void)
{
	cin >> T;

	while (T--)
	{
		cin >> V >> E;

		for (int i = 0; i < E; i++)
		{
			int num1, num2;
			cin >> num1 >> num2;
			
			map[num1].push_back(num2);
			map[num2].push_back(num1);
		}

		for (int i = 1; i <= V; i++)
		{
			if (visited[i] == false)
			{
				DFS(i);
			}
		}

		cout << (MapCheck() ? "YES" : "NO") << endl;

		memset(visited, 0, sizeof(visited));
		for (int i = 0; i <= V; i++)
		{
			map[i].clear();
		}
	}

	return 0;
}