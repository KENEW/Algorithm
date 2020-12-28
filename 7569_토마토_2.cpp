#include<iostream>
#include<queue>
#define MAX 101
using namespace std;

typedef struct
{
	int z;
	int y;
	int x;
}POS;

POS moveDir[] = { {0, 1, 0},{0, -1, 0},{0, 0, 1},{0, 0 ,-1}, {1, 0, 0}, {-1, 0, 0} };
queue<POS> tomato;
int H, N, M;
bool visited[MAX][MAX][MAX];
int map[MAX][MAX][MAX];
int result = 0;

void BFS()
{
	while (!tomato.empty())
	{
		int posH = tomato.front().z;
		int posY = tomato.front().y;
		int posX = tomato.front().x;
		
		tomato.pop();

		for (int i = 0; i < 6; i++)
		{
			int nextH = posH + moveDir[i].z;
			int nextY = posY + moveDir[i].y;
			int nextX = posX + moveDir[i].x;

			if (nextH >= 0 && nextH < H && nextY >= 0 && nextY < N && nextX >= 0 && nextX < M)
			{
				if (map[nextH][nextY][nextX])//&& visited[nextH][nextY][nextX] == false)
				{
					continue;
				}
					map[nextH][nextY][nextX] = map[posH][posY][posX] + 1;
					tomato.push({ nextH, nextY, nextX });
				
			}
		}
	}
}

int main(void)
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M >> N >> H;

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				cin >> map[i][j][k];

				if (map[i][j][k] == 1)
				{
					tomato.push({i, j, k});
				}
			}
		}
	}

	BFS();

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				if (map[i][j][k] == 0)
				{
					cout << "-1";
					return 0;
				}
				if (result < map[i][j][k])
				{
					result = map[i][j][k];
				}
			}
		}
	}

	cout << result - 1;
	return 0;
}
