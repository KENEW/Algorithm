#include<iostream>
#include<queue>
#include<utility>
#include<stdlib.h>
#include<cstdio>
#define MAX 1001

using namespace std;

typedef struct
{
	int y;
	int x;
}POS;

POS moveDir[] = { {1,0},{0,1},{-1,0},{0,-1} };
int N, M;
char map[MAX][MAX];
int visited[MAX][MAX][2] = {0, };

int BFS()
{
	queue<pair<pair<int, int>, int>> q;
	visited[1][1][1] = 1;
	q.push({{1, 1}, 1});

	while (!q.empty())
	{
		int posY = q.front().first.first;
		int posX = q.front().first.second;
		int block = q.front().second;
		
		q.pop();

		if (posY == N && posX == M)
		{
			return visited[posY][posX][block];
		}

		for (int i = 0; i < 4; i++)
		{
			int nextY = posY + moveDir[i].y;
			int nextX = posX + moveDir[i].x;
			
			if (nextY >= 1 && nextY <= N && nextX >= 1 && nextX <= M)
			{
				if (map[nextY][nextX] == '1' && block)
				{
					visited[nextY][nextX][block - 1] = visited[posY][posX][block] + 1;
					q.push({{nextY, nextX}, block - 1});
				}
				if (map[nextY][nextX] == '0' && visited[nextY][nextX][block] == 0)
				{
					visited[nextY][nextX][block] = visited[posY][posX][block] + 1;
					q.push({{nextY, nextX}, block});
				}
			}
		}
	}

	return -1;
}

int main(void)
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		scanf("%s", &map[i][1]);
	}

	cout << BFS();
	return 0;
}
