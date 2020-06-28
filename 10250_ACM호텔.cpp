//#include<iostream>
//#define MAX_SIZE 99
//
//using namespace std;
//
//void solution(int h, int w, int n)
//{
//	int curH = -1, curW = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		if (curH < h - 1)
//			curH++;
//		else
//		{
//			curH = 0;
//			curW++;
//		}
//	}
//	printf("%d%02d\n", (curH + 1), (curW + 1));
//}
//
//int main(void)
//{
//	int input;
//	cin >> input;
//
//	for (int i = 0; i < input; i++)
//	{
//		int num1, num2, num3;
//		cin >> num1 >> num2 >> num3;
//		solution(num1, num2, num3);
//	}
//
//	return 0;
//}