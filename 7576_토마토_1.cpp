#include<iostream>
#include<queue>
#include<cstdio>
#include<cstring>

#define MAX 101

using namespace std;

typedef struct
{
	int y;
	int x;
}Pos;

Pos moveDir[4] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int N, M, result = 0;
int map[MAX][MAX];
queue<Pos> tomato;

void BFS()
{
	while (!tomato.empty())
	{
		int curX = tomato.front().x;
		int curY = tomato.front().y;
		tomato.pop();

		for (int i = 0; i < 4; i++)
		{
			int nextY = moveDir[i].y + curY;
			int nextX = moveDir[i].x + curX;

			if (nextY >= 0 && nextY < N && nextX >= 0 && nextX < M && map[nextY][nextX] == 0)
			{
				map[nextY][nextX] = map[curY][curX] + 1;
				tomato.push({nextY, nextX});
			}
		}
	}
}

int main()
{
	cin >> M >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 1)
			{
				tomato.push({i, j});
			}
		}
	}

	BFS();

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (map[i][j] == 0)
			{
				cout << "-1\n";
				return 0;
			}
			if (result < map[i][j])
			{
				result = map[i][j];
			}
		}
	}

	cout << result - 1;

	return 0;
}