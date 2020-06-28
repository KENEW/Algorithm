//#include<iostream>
//#define MAXWIDTH 14
//using namespace std;
//
//int solution(int height, int width)
//{
//	int widthNum[MAXWIDTH];
//	int widthAfter[MAXWIDTH] = {0,};
//
//	for (int t = 0; t < width; t++)
//	{
//		widthNum[t] = t + 1;
//	}
//
//	for (int i = 0; i < height; i++)
//	{
//		for (int j = 0; j < width; j++)
//		{
//			widthAfter[j] = 0;
//
//			for (int k = 0; k < j + 1; k++)
//			{
//				widthAfter[j] += widthNum[k];
//			}
//		}
//		for (int k = 0; k < width; k++)
//			widthNum[k] = widthAfter[k];
//	}
//
//	return widthAfter[width - 1];
//}
//
//int main(void)
//{
//	int input;
//	cin >> input;
//
//	for (int i = 0; i < input; i++)
//	{
//		int height, width;
//		cin >> height >> width;
//
//		cout << solution(height, width) << endl;
//	}
//
//	return 0;
//}