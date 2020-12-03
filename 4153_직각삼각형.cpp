//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int input[3];
//
//void Solution()
//{
//	if (input[0] < input[1])
//	{
//		int temp = input[0];
//		input[0] = input[1];
//		input[1] = temp;
//	}
//	if (input[0] < input[2])
//	{
//		int temp = input[0];
//		input[0] = input[2];
//		input[2] = temp;
//	}
//
//	if ((int)pow(input[0], 2) == (int)pow(input[1], 2) + (int)pow(input[2], 2))
//	{
//		cout << "right" << endl;
//	}
//	else
//	{
//		cout << "wrong" << endl;
//	}
//}
//
//int main(void)
//{
//	while (1)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			cin >> input[i];
//		}
//
//		if ((input[0] == 0) && (input[1] == 0) && (input[2] == 0))
//		{
//			break;
//		}
//
//		Solution();
//	}
//	
//	return 0;
//}