//#include<iostream>
//#include<memory.h>
//using namespace std;
//
//int N;
//char ch[3000][3000];
//
//void StarStart(int w, int x, int y)
//{
//	if (w == 1)
//	{
//		ch[x][y] = '*';
//		return;
//	}
//
//	int div = w / 3;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (i == 1 && j == 1)
//			{
//				continue;
//			}
//			StarStart(div, x + (div * i), y + (div * j));
//
//		}
//	}
//
//	return;
//
//}
//
//int main(void)
//{
//	cin >> N;
//
//	memset(ch, ' ', sizeof(ch));
//
//	StarStart(N, 0, 0);
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++ )
//		{
//			printf("%c", ch[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}