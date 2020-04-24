//#include<iostream>
//using namespace std;
//
//int main(void)
//{
//	const int NUMBER = 9;
//	int input[NUMBER];
//	int output[NUMBER];
//
//	for (int i = 0; i < NUMBER; i++)
//	{
//		cin >> input[i];
//		output[i] = input[i];
//	}
//	
//	//BUBBLE SORT USE!!
//	for (int i = NUMBER - 1; i > 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			int temp;
//			if (output[j] > output[j + 1])
//			{
//				temp = output[j];
//				output[j] = output[j + 1];
//				output[j + 1] = temp;
//			}
//		}
//	}
//	
//	cout << output[NUMBER - 1] << endl;
//
//	for (int k = 0; k < NUMBER; k++)
//	{
//		if (input[k] == output[NUMBER - 1])
//		{
//			cout << k + 1;
//		}
//	}
//
//	return 0;
//}