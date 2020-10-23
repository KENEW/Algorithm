//#include<iostream>
//#include<deque>
//using namespace std;
//
//deque<int> de;
//int N;
//string str = "";
//int temp;
//
//int main(void)
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> str;
//
//		if (str == "push_front")
//		{
//			cin >> temp;
//			de.push_front(temp);
//		}
//		else if (str == "push_back")
//		{
//			cin >> temp;
//			de.push_back(temp);
//		}
//		else if (str == "pop_front")
//		{
//			if (de.empty())
//			{
//				cout << "-1" << "\n";
//			}
//			else
//			{
//				cout << de.front() << "\n";
//				de.pop_front();
//			}
//		}
//		else if (str == "pop_back")
//		{
//			if (de.empty())
//			{
//				cout << "-1" << "\n";
//			}
//			else
//			{
//				cout << de.back() << "\n";
//				de.pop_back();
//			}
//		}
//		else if (str == "size")
//		{
//			cout << de.size() << "\n";
//		}
//		else if (str == "empty")
//		{
//			if (de.empty())
//			{
//				cout << "1" << "\n";
//			}
//			else
//			{
//				cout << "0" << "\n";
//			}
//		}
//		else if (str == "front")
//		{
//			if (de.empty())
//			{
//				cout << "-1" << "\n";
//			}
//			else
//			{
//				cout << de.front() << "\n";
//			}
//		}
//		else if (str == "back")
//		{
//			if (de.empty())
//			{
//				cout << "-1" << "\n";
//			}
//			else
//			{
//				cout << de.back() << "\n";
//			}
//		}
//	}
//
//	return 0;
//}