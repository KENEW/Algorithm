//#include<iostream>
//#include<cstdio>
//#include<vector>
//using namespace std;
//
//constexpr int MAX = 100001;
//
//int N;
//bool visited[MAX];
//int parent[MAX];
//vector<int> tree[MAX];
//
//void Parent(int node)
//{
//	visited[node] = true;
//
//	for (int i = 0; i < tree[node].size(); i++)
//	{
//		int next = tree[node][i];
//
//		if (visited[next] == false)
//		{
//			parent[next] = node;
//			Parent(next);
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
//
//		tree[node1].push_back(node2);
//		tree[node2].push_back(node1);
//	}
//
//	Parent(1);
//
//	for(int i = 2; i <= N; i++)
//	{
//		printf("%d\n", parent[i]);
//	}
//
//	return 0;
//}
