//#include<iostream>
//
//#define MAXARR 1000000
//using namespace std;
//
//void solution(int num)
//{
//	int h = 1, w = 1;
//	int count = 0;
//
//	for (int i = 1; i < MAXARR; i++)
//	{
//		w = (i % 2 == 1) ? w = i : w = w;
//		h = (i % 2 == 0) ? h = i : h = h;
//
//		count++;
//
//		for (int j = 1; j < i; j++)
//		{
//			if (i % 2 == 1)
//			{
//				h++;
//				w--;
//			}
//			else
//			{
//				h--;
//				w++;
//			}
//
//			count++;
//
//			if (count == num)
//			{
//				cout << w << '/' << h;
//				return;
//			}
//		}
//	}
//
//}
//
//int main(void)
//{
//	int input;
//	cin >> input;
//
//	solution(input);
//
//	return 0;
//}