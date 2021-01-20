//#include<stdio.h>
//
//int number = 6;
//int const INF = 1000000000;
//
//int a[6][6] = 
//{
//	{0, 2, 4, 1, INF, INF},
//	{2, 0, 3, 2, INF, INF},
//	{5, 3, 0, 3, 1, 5},
//	{1, 2, 3, 0, 1, INF},
//	{INF, INF, 1, 1, 0, 2},
//	{INF, INF, 5, INF, 2, 0}
//};
//
//bool visited[6];
//int distance[6];
//
//int GetSmallIndex()
//{
//	int min = INF;
//	int index = 0;
//
//	for (int i = 0; i < number; i++)
//	{
//		if (distance[i] < min)
//		{
//			if (visited[i] == false)
//			{
//				min = distance[i];
//				index = i;
//			}
//		}
//	}
//
//	return index;
//}
//
//void dijkstra(int start)
//{
//	for (int i = 0; i < number; i++)
//	{
//		distance[i] = a[start][i];
//	}
//
//	visited[start] = true;
//
//	for (int i = 0; i < number - 2; i++)
//	{
//		int current = GetSmallIndex();
//		visited[current] = true;
//
//		for (int j = 0; j < 6; j++)
//		{
//			if (visited[j] == false)
//			{
//				if (distance[current] + a[current][j] < distance[j])
//				{
//					distance[j] = distance[current] + a[current][j];
//				}
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	dijkstra(0);
//
//	for (int i = 0; i < number; i++)
//	{
//		printf("%d", distance[i]);
//	}
//}