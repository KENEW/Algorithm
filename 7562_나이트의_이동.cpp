#include<iostream>
#include<algorithm>
#include<queue>
#include<memory.h>
#define MAX 301
using namespace std;

typedef struct
{
	int y;
	int x;
}Pos;

//Pos movePos[] = { {-1, -2},{-1, 2},{1, 2},{1, 2}, {2, -1}, {2, 1}, {-2, -1}, {-2, 1} };

const int movePosX[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
const int movePosY[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int T, N;
int visited[MAX][MAX] = {0, };
Pos curPos, destPos;

//아 왜 안되냐 ㅋㅋ

void BFS()
{
	queue<Pos> q;
	q.push(curPos);
	//visited[curPos.y][curPos.x] = 1;

	while (!q.empty())
	{
		int y = q.front().y;
		int x = q.front().x;
		q.pop();

		if (y == destPos.y && x == destPos.x)
		{
			cout << visited[y][x] << endl;

			return;
		}

		for (int i = 0; i < 8; i++)
		{
			int nextY = y + movePosY[i];
			int nextX = x + movePosX[i];

			if (nextY >= 0 && nextY <= N && nextX >= 0 && nextX < N)
			{
				if (visited[nextY][nextX] == 0)
				{
					visited[nextY][nextX] = visited[y][x] + 1;
					q.push({ nextY, nextX });
				}
			}
		}
	}

	cout << "0" << endl;
}

int main(void)
{
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int temp1, temp2;

		cin >> N;

		cin >> temp1 >> temp2;
		curPos = { temp1, temp2 };

		cin >> temp1 >> temp2;
		destPos = { temp1, temp2 };

		memset(visited, 0, sizeof(visited));
		BFS();
	}

	return 0;
}