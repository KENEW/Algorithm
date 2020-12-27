//#include<iostream>
//#include<queue>
//#define MAX 101
//
//using namespace std;
//
//typedef struct
//{
//	int x;
//	int y;
//}MoveDir;
//
//MoveDir moveDir[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
//
//char map[MAX][MAX];
//bool visited[MAX][MAX];
//int check[MAX][MAX];
//int N, M;
//
//void BFS(int x, int y)
//{
//	queue<pair<int, int>> q;
//	q.push(make_pair(x, y));
//
//	visited[x][y] = true;
//
//	while (!q.empty())
//	{
//		int X = q.front().first;
//		int Y = q.front().second;
//
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nextX = moveDir[i].x + X;
//			int nextY = moveDir[i].y + Y;
//
//			if (nextX >= 0 && nextX < N && nextY >= 0 && nextY < M)
//			{
//				if (map[nextX][nextY] == '1' && visited[nextX][nextY]== false)
//				{
//					check[nextX][nextY] = check[X][Y] + 1;
//					visited[nextX][nextY] = true;
//					q.push(make_pair(nextX, nextY));
//				}
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> map[i];
//	}
//
//	BFS(0, 0);
//
//	cout << check[N - 1][M - 1] + 1;
//
//	return 0;
//}
