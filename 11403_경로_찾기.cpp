//#include<iostream>
//#include<vector>
//using namespace std;
//
//int I, J;
//int arr[101][101];
//int visitedCheck[101] = {0, };
//
//void DFS(int u)
//{
//	for (int i = 0; i < I; i++)
//	{
//		if (arr[u][i] && !visitedCheck[i])
//		{
//			visitedCheck[i] = 1;
//			DFS(i);
//		}
//	}
//}
//
//int main(void)
//{
//	cin >> I;
//
//	for (int i = 0; i < I; i++)
//	{
//		for(int j = 0; j < I; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < I; i++)
//	{
//		memset(visitedCheck, 0, sizeof(visitedCheck));
//		DFS(i);
//
//		for (int j = 0; j < I; j++)
//		{
//			if (visitedCheck[j])
//			{
//				arr[i][j] = 1;
//			}
//		}
//
//	}
//
//	for (int i = 0; i < I; i++)
//	{
//		for (int j = 0; j < I; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//
//		cout << endl;
//	}
//
//	return 0;
//}