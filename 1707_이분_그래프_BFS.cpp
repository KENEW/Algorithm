#include<iostream>
#include<algorithm>
#include<memory.h>
#include<vector>
#include<queue>
#define MAX 20001
using namespace std;

int T, V, E;
vector<int> map[MAX];
int visited[MAX];

void BFS(int start)
{
	queue<int> q;
	
	int color = 1;
	q.push(start);
	visited[start] = color;

	while (!q.empty())
	{
		int now = q.front();
		q.pop();

		if (visited[now] == 1)
		{
			color = 2;
		}
		else
		{
			color = 1;
		}

		for(int i = 0; i < map[now].size(); i++)
		{
			int next = map[now][i];

			if (visited[next] == false)
			{
				visited[next] = color;
				q.push(next);
			}
		}
	}
}

bool CheckMap()
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
				BFS(i);
			}
		}

		cout << (CheckMap() ? "YES" : "NO") << endl;

		memset(visited, 0, sizeof(visited));
		for (int i = 0; i <= V; i++)
		{
			map[i].clear();
		}
	}

	return 0;
}