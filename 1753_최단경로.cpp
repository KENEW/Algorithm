//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int number = 6;
//int INF = 1000000000;
//
//vector<pair<int, int>> a[20001];
//int distanceArr[20001];
//
//int V, E, startIdx;
//
////time out bitch
////cin vs scanf
//
//void dijkstra()
//{
//	distanceArr[startIdx] = 0;
//	priority_queue<pair<int, int>> pq;
//
//	pq.push(make_pair(0, startIdx));
//
//	while (!pq.empty())
//	{
//		int current = pq.top().second;
//		int distances = -pq.top().first;
//		pq.pop();
//
//		if (distanceArr[current] < distances)
//		{
//			continue;
//		}
//
//		for (int i = 0; i < a[current].size(); i++)
//		{
//			int next = a[current][i].first;
//			int nextDis = a[current][i].second;
//
//			if (nextDis + distances < distanceArr[next])
//			{
//				distanceArr[next] = nextDis + distances;
//				pq.push(make_pair(-distanceArr[next], next));
//			}
//		}
//	}
//
//	for (int i = 1; i <= V; i++)
//	{
//		if (distanceArr[i] == INF)
//		{
//			printf("INF\n");
//		}
//		else
//		{
//			printf("%d\n", distanceArr[i]);
//		}
//	}
//}
//
//int main(void)
//{
//	scanf("%d %d %d", &V, &E, &startIdx);
//
//	for (int i = 1; i <= V; i++)
//	{
//		distanceArr[i] = INF;
//	}
//
//	for (int i = 0; i < E; i++)
//	{
//		int t_u, t_v, t_w;
//		scanf("%d %d %d", &t_u, &t_v, &t_w);
//		a[t_u].push_back(make_pair(t_v, t_w));
//	}
//
//	dijkstra();
//
//	return 0;
//}