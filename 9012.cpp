//#include<iostream>
//#include<stack>
//using namespace std;
//
//bool Solution()
//{
//	string str;
//
//	int leftCount = 0;
//
//	cin >> str;
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str.at(i) == '(')
//		{
//			leftCount++;
//		}
//
//		else if (str.at(i) == ')')
//		{
//			if (leftCount <= 0)
//			{
//				return false;
//			}
//
//			leftCount--;
//		}
//	}
//
//	return leftCount >= 1 ? false : true;
//}
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