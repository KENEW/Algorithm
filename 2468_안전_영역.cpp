//#include<iostream>
//#include<algorithm>
//#include<memory.h>
//#define endl "\n"
//using namespace std;
//
//int arr[101][101];
//int visitedCheck[101][101];
//int N;
//
//int sum = 0;
//int result = 1;	//이거땜에 삽질을 엄청했다.. 0말고 1을 해야하는이유는 하나도 잠기지 않을때 모든 하나가 안전구역이니깐 1로 설정해야한다...
//int minRain = 101, maxRain = 0;
//
//typedef struct
//{
//	int y;
//	int x;
//}Pos;
//
//Pos moveDir[] = { {1, 0},  {-1, 0}, {0, 1}, {0, -1} };
//
//void DFS(int y, int x, int curRain)
//{
//	visitedCheck[y][x] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nextY = y + moveDir[i].y;
//		int nextX = x + moveDir[i].x;
//
//		if (nextY >= 0 && nextY < N && nextX >= 0 && nextX < N)
//		{
//			if (!visitedCheck[nextY][nextX])
//			{
//				if (curRain < arr[nextY][nextX])
//				{
//					DFS(nextY, nextX, curRain);
//				}
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> arr[i][j];
//			maxRain = max(maxRain, arr[i][j]);
//			minRain = min(minRain, arr[i][j]);
//		}
//	}
//
//	for(int curRain = minRain; curRain < maxRain; curRain++)
//	{
//		sum = 0;
//		memset(visitedCheck, false, sizeof(visitedCheck));
//
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if (!visitedCheck[i][j] && (curRain < arr[i][j]))
//				{
//					sum++;
//					DFS(i, j, curRain);
//
//				}
//				else
//				{
//					visitedCheck[i][j] = true;
//				}
//			}
//		}
//
//		result = max(result, sum);
//	}
//
//	cout << result;
//
//	return 0;
//}
