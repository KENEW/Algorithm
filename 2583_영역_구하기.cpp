//#include<iostream>
//#include<algorithm>
//#include<vector>
//#define MAX 101
//using namespace std;
//
//int M, N, K;
//int arr[MAX][MAX] = {0, };
//int visited[MAX][MAX];
//vector<int> arrays;
//int result = 0;
//
//typedef struct
//{
//	int y;
//	int x;
//}Pos;
//
//Pos pixel1, pixel2;
//
//Pos moveDir[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
//
//void DFS(int y, int x)
//{
//	if (visited[y][x] == 0)
//	{
//		visited[y][x] = -1;
//		result++;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nextY = y + moveDir[i].y;
//			int nextX = x + moveDir[i].x;
//
//			if (nextY >= 0 && nextY < M && nextX >= 0 && nextX < N)
//			{
//				DFS(nextY, nextX);
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	cin >> M >> N >> K;
//
//	while (K--)
//	{
//		cin >> pixel1.x >> pixel1.y >> pixel2.x >> pixel2.y;
//
//		for (int i = pixel1.y; i < pixel2.y; i++)
//		{
//			for (int j = pixel1.x; j < pixel2.x; j++)
//			{
//				visited[i][j] = -1;
//			}
//		}
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (visited[i][j] == 0)
//			{
//				DFS(i, j);
//				arrays.push_back(result);
//				result = 0;
//			}
//		}
//	}
//
//	sort(arrays.begin(), arrays.end());
//
//	cout << arrays.size() << endl;
//
//	for(int i = 0; i < arrays.size(); i++)
//	{
//		cout << arrays[i] << " ";
//	}
//	return 0;
//}