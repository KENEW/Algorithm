//#include<iostream>
//#include<queue>
//using namespace std;
//
//typedef struct
//{
//	int y;
//	int x;
//}Pos;
//
//int arr[51][51];
//
//int N, M;
//int curY, curX, curD;
//int result = 0;
//
//Pos moveDir[] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };
//Pos backDir[] = { {1, 0},{0, -1},{-1, 0},{0, 1} };
//
//void DFS(Pos pos, int curD)
//{
//
//	if (arr[pos.y][pos.x] == 1)
//	{
//		return;
//	}
//	if (arr[pos.y][pos.x] == 0)
//	{
//		arr[pos.y][pos.x] = 2;
//		result++;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nextD = (curD - 1 == -1) ? 3 : curD - 1;
//
//		int nextY = pos.y + moveDir[nextD].y;
//		int nextX = pos.x + moveDir[nextD].x;
//
//		if (arr[nextY][nextX] == 0)
//		{
//			DFS({ nextY, nextX }, nextD);
//			return;
//		}
//		else
//		{
//			curD = nextD;
//		}
//	}
//
//	//int backY = pos.y + (moveDir[(curD + 2) % 4].y);
//	//int backX = pos.x + (moveDir[(curD + 2) % 4].x);
//	int backY = pos.y + backDir[curD].y;
//	int backX = pos.x + backDir[curD].x;
//
//
//		DFS({ backY, backX }, curD);
//	
//
//}
//
//int main(void)
//{
//	cin >> N >> M;
//
//	cin >> curY >> curX >> curD;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	DFS({ curY, curX }, curD);
//
//	cout << result;
//
//	return 0;
//}