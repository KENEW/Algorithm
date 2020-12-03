//#include<iostream>
//using namespace std;
//
//int pos[3][2];
//int resultPos[2];
//
//void Solution()
//{
//	if (pos[0][0] == pos[1][0])
//	{
//		resultPos[0] = pos[2][0];
//	}
//	else if(pos[0][0] == pos[2][0])
//	{
//		resultPos[0] = pos[1][0];
//	}
//	else
//	{
//		resultPos[0] = pos[0][0];
//	}
//
//	if (pos[0][1] == pos[1][1])
//	{
//		resultPos[1] = pos[2][1];
//	}
//	else if (pos[0][1] == pos[2][1])
//	{
//		resultPos[1] = pos[1][1];
//	}
//	else
//	{
//		resultPos[1] = pos[0][1];
//	}
//}
//
//int main(void)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> pos[i][0] >> pos[i][1];
//	}
//
//	Solution();
//
//	cout << resultPos[0] << " " << resultPos[1];
//	return 0;
//}