//#include<iostream>
//#include<stack>
//using namespace std;
//
//bool Solution()
//{
//	stack<char> st;
//	string str;
//
//	cin >> str;
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str.at(i) == '(')
//		{
//			st.push(str.at(i));
//		}
//		else if(str.at(i) == ')')
//		{
//			if (st.empty())
//			{
//				return false;
//			}
//			else
//			{
//				st.pop();
//			}
//		}
//	}
//
//	return st.empty() ? true : false;
//}
//
//int main(void)
//{
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		if (Solution())
//		{
//			cout << "YES" << '\n';
//		}
//		else
//		{
//			cout << "NO" << '\n';
//		}
//	}
//
//	return 0;
//}