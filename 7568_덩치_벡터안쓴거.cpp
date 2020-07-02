//#include<iostream>
//#define MAX 50
//using namespace std;
//
//int arr[MAX][3] = {1,};
//
//void solution(int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = 0; j < num; j++)
//		{
//			if((arr[i][0] < arr[j][0] && (arr[i][1] < arr[j][1])))
//				arr[i][2]++;
//		}
//	}
//}
//
//int main(void)
//{
//	int input;
//	cin >> input;
//
//	for (int i = 0; i < input; i++)
//	{
//		int w, h;
//		cin >> w >> h;
//
//		arr[i][0] = w;
//		arr[i][1] = h;
//		arr[i][2] = 1;
//	}
//	solution(input);
//
//	for (int i = 0; i < input; i++)
//		cout << arr[i][2] << " ";
//	
//	return 0;
//}