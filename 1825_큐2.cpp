//#include<iostream>
//#include<queue>
//using namespace std;
//
//queue<int> de;
//
//int main(void)
//{
//	cin.tie(0);
//	cin.sync_with_stdio(0);
//
//	string str = "";
//	int N;
//	int num;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> str;
//
//		if (str == "push")
//		{
//			cin >> num;
//			de.push(num);
//		}
//		else if (str == "pop")
//		{
//			if (de.empty())
//			{
//				cout << "-1";
//			}
//			else
//			{
//				cout << de.front();
//				de.pop();
//			}
//		}
//		else if (str == "size")
//		{
//			cout << de.size();
//		}
//		else if (str == "empty")
//		{
//			cout << de.empty();
//		}
//		else if (str == "front")
//		{
//			if (de.empty())
//			{
//				cout << '-1';
//			}
//			else
//			{
//				cout << de.front();
//			}
//		}
//		else if (str == "back")
//		{
//			if (de.empty())
//			{
//				cout << '-1';
//			}
//			else
//			{
//				cout << de.back();
//			}
//		}
//		cout << '\n';
//	}
//
//	return 0;
//}