//#include<stdio.h>
//
//constexpr int number = 4;
//constexpr int INF = 100000000;
//
//int arr[4][4] = 
//{
//	{0, 5, INF, 8},
//	{7, 0, 9, INF},
//	{2, INF, 0, 4},
//	{INF, INF, 3, 0}
//};
//
//void FloydWarShall()
//{
//	int d[number][number];
//
//	for (int i = 0; i < number; i++)
//	{
//		for (int j = 0; j < number; j++)
//		{
//			d[i][j] = arr[i][j];
//		}
//	}
//
//	//k = 거쳐가는 노드
//	for (int k = 0; k < number; k++)
//	{
//		//i = 출발 노드
//		for (int i = 0; i < number; i++)
//		{
//			//j = 도착 노드
//			for (int j = 0; j < number; j++)
//			{
//				if (d[i][k] + d[k][j] < d[i][j])
//				{
//					d[i][j] = d[i][k] + d[k][j];
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < number; i++)
//	{
//		for (int j = 0; j < number; j++)
//		{
//			printf("%3d ", d[i][j]);
//		}
//	}
//}
//
//int main(void)
//{
//	FloydWarShall();
//
//	return 0;
//}
//
//
