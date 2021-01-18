//#include<iostream>
//#include<vector>
//#define MAX 1001
//using namespace std;
//
//int N, M;
//vector<int> arr[MAX];
//bool visited[MAX];
//int result = 0;
//
//void DFS(int index)
//{
//	if (visited[index] == false)
//	{
//		visited[index] = 1;
//	}
//	else
//	{
//		return;
//	}
//	for (int i = 0; i < arr[index].size(); i++)
//	{
//		int next = arr[index][i];
//		DFS(next);
//	}
//}
//
//int main(void)
//{
//	cin >> N >> M;
//
//	for(int i = 0; i < M; i++)
//	{
//		int u, v;
//		cin >> u >> v;
//
//		arr[u].push_back(v);
//		arr[v].push_back(u);
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		if (visited[i] == 0)
//		{
//			result++;
//			DFS(i);
//		}
//	}
//
//	cout << result;
//	return 0;
//}
//
