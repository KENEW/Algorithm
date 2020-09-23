//#include<iostream>
//#include<list>
//using namespace std;
//
//string input[50];
//int Count = 250; // w : 50 x h : 50
//
//string Check1[8] = 
//{
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"}
//};
//string Check2[8] =
//{
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//};
//
//void BWCheck(int x, int y)
//{
//	int tmpCount = 0;
//
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (input[i + y][j + x] != Check2[i][j])
//				tmpCount++;
//		}
//	}
//
//	if(tmpCount < Count) Count = tmpCount;
//}
//
//void WBCheck(int x, int y)
//{
//	int tmpCount = 0;
//
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (input[i + y][j + x] != Check1[i][j])
//				tmpCount++;
//		}
//	}
//
//	if (tmpCount < Count) Count = tmpCount;
//
//}
//
//int main(void)
//{
//	int x, y;
//	cin >> y >> x;
//	
//	for (int i = 0; i < y; i++)
//	{
//		cin >> input[i];
//	}
//
//	
//	for (int j = 0; j < x - 7; j++)
//	{
//		for (int i = 0; i < y - 7; i++)
//		{
//			BWCheck(j, i);
//			WBCheck(j, i);
//		}
//	}
//	
//
//	cout << Count;
//	return 0;
//}