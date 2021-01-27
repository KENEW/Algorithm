//#include<queue>
//#include<vector>
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//constexpr int MAX = 100001;
//
//vector<int> arr[MAX];
//int parent[MAX];
//int N;
//
//void BFS()
//{
//	queue<int> q;
//	q.push(1);
//
//	while (!q.empty())
//	{
//		int cur = q.front();
//		q.pop();
//
//		for (int i = 0; i < arr[cur].size(); i++)
//		{
//			if (parent[cur] != arr[cur][i])
//			{
//				q.push(arr[cur][i]);
//				parent[arr[cur][i]] = cur;
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	int node1, node2;
//
//	scanf("%d", &N);
//
//	for (int i = 0; i < N - 1; i++)
//	{
//		scanf("%d %d", &node1, &node2);
//		arr[node1].push_back(node2);
//		arr[node2].push_back(node1);
//	}
//
//	BFS();
//
//	for (int i = 2; i <= N; i++)
//	{
//		cout << parent[i] << "\n";
//	}
//
//	return 0;
//}
