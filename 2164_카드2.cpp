//#include<iostream>
//#include<deque>
//using namespace std;
//
//int main(void)
//{
//	int N;
//	int temp;
//	deque<int> de;
//	cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		de.push_back(i);
//	}
//
//	while(true)
//	{
//		if (de.size() >= 2)
//		{
//			de.pop_front();
//		}
//
//		if (de.size() == 1)
//		{
//			break;
//		}
//
//		if (de.size() >= 2)
//		{
//			temp = de.front();
//			de.pop_front();
//			de.push_back(temp);
//		}
//		
//
//		if (de.size() == 1)
//		{
//			break;
//		}
//	}
//
//	cout << de.front();
//
//	return 0;
//}