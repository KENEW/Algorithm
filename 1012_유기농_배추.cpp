#include<iostream>
#include<cstdlib>
using namespace std;

#define MAX 50

typedef struct
{
	int y;
	int x;
}MoveDir;

MoveDir moveDir[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int T, M, N, K;
int map[MAX][MAX] = {0, };
bool visited[MAX][MAX] = {false, };
int bug;

void DFS(int y, int x)
{
	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		int nextY = y + moveDir[i].y;
		int nextX = x + moveDir[i].x;

		if (nextX >= 0 && nextX < M && nextY >= 0 && nextY < N)
		{
			if (map[nextY][nextX] == 1 && visited[nextY][nextX] == false)
			{
				DFS(nextY, nextX);
			}
		}
	}
}

int main(void)
{
	MoveDir t_pos;

	cin.sync_with_stdio(false);
	cin.tie(NULL);

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> M >> N >> K;

		bug = 0;
		memset(map, 0, sizeof(map));
		memset(visited, false, sizeof(visited));

		for (int i = 0; i < K; i++)
		{
			cin >> t_pos.x;
			cin >> t_pos.y;

			map[t_pos.y][t_pos.x] = 1;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (map[i][j] == 1 && visited[i][j] == false)
				{
					DFS(i, j);
					bug++;
				}
			}
		}

		cout << bug << '\n';
	}
	
	return 0;
}