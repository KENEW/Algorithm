//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//queue<int> qu;
//
//bool compare(int num1, int num2)
//{
//	return num1 < num2;
//}
//
//int main(void)
//{
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int number, findNum;
//		cin >> number >> findNum;
//
//		for (int j = 0; j < number; j++)
//		{
//			int pushNum;
//			cin >> pushNum;
//			qu.push(pushNum);
//		}
//
//		sort(qu.front(), qu.back(), compare);
//		
//		for (int i = 0; i < findNum; i++)
//		{
//			qu.pop();
//			cout << qu.front() << '\n';
//		}
//	}
//
//	return 0;
//}
//
//
