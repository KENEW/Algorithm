//#include<iostream>
//#include<algorithm>
//#include<queue>
//#define MAX 9
//using namespace std;
//
//int N, M;
//int arr[MAX][MAX];
//int t_arr[MAX][MAX];
//int result = 0;
//
//typedef struct
//{
//	int y;
//	int x;
//}Pos;
//
//Pos moveDir[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
//
//void BFS()
//{
//	queue<Pos> q;
//
//	int a_arr[MAX][MAX];
//
//	//memcpy(a_arr, arr, sizeof(arr));
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			a_arr[i][j] = t_arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (a_arr[i][j] == 2)
//			{
//				//q.emplace(i, j);
//				q.push({i, j});
//			}
//		}
//	}
//
//	while (!q.empty())
//	{
//		int y = q.front().y;
//		int x = q.front().x;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nextY = moveDir[i].y + y;
//			int nextX = moveDir[i].x + x;
//
//			if (nextY >= 0 && nextY < N && nextX >= 0 && nextX < M)
//			{
//				if (a_arr[nextY][nextX] == 0)
//				{
//					a_arr[nextY][nextX] = 2;
//					q.push({ nextY, nextX });
//
//				}
//			}
//		}
//	}
//
//	int emptyCnt = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (a_arr[i][j] == 0)
//			{
//				emptyCnt++;
//			}
//		}
//	}
//
//	result = max(result, emptyCnt);
//}
//
//void Wall(int cnt)
//{
//	if(cnt == 3)
//	{
//		BFS();
//		return;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (t_arr[i][j] == 0)
//			{
//				t_arr[i][j] = 1;
//				Wall(cnt + 1);
//				t_arr[i][j] = 0;
//			}
//		}
//	}
//}
//int main(void)
//{
//	cin >> N >> M;
//	
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				for (int a = 0; a < N; a++)
//				{
//					for (int b = 0; b < M; b++)
//					{
//						t_arr[a][b] = arr[a][b];
//					}
//				}
//
//				t_arr[i][j] = 1;
//
//				Wall(1);
//
//				t_arr[i][j] = 0;
//			}
//		}
//	}
//
//	cout << result << endl;
//
//	return 0;
//}