#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

#define MAX 25
#define endl "\n"

typedef struct
{
	int y;
	int x;
}MoveDir;

MoveDir moveDir[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

string map[MAX];
vector<int> home;
bool visited[MAX][MAX] = {false, };
int N;
int cnt = 0;

void DFS(int y, int x)
{
	visited[y][x] = true;
	cnt++;

	for (int i = 0; i < 4; i++)
	{
		int nextY = y + moveDir[i].y;
		int nextX = x + moveDir[i].x;

		if (nextX >= 0 && nextX < N && nextY >= 0 && nextY < N)
		{
			if (map[nextY][nextX] == '1' && visited[nextY][nextX] == false)
			{
				DFS(nextY, nextX);
			}
		}
	}
}

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> map[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == '1'&& visited[i][j] == false)
			{
				cnt = 0;
				DFS(i, j);
				home.push_back(cnt);
			}
		}
	}

	sort(home.begin(), home.end());

	cout << home.size() << endl;

	for(int i = 0; i < home.size(); i++)
	{
		cout << home[i] << endl;
	}

	return 0;
}