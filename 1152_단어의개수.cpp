//#include<iostream>
//#include<string>
//using namespace std;
//
//int solution(string str)
//{
//	int start = 0;
//	int j;
//	int count = 0;
//	char space = ' ';
//	
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str.at(i) != space)
//		{
//			start = i;
//			break;
//		}
//	}
//
//	for (int i = start; i < str.length(); i++)
//	{
//		if (str.at(i) == space)
//		{
//			if (i == str.length() - 1)
//			{
//				break;
//			}
//			else if (str.at(i + 1) == space)
//			{
//				break;
//			}
//
//		}
//		else if (str.at(i) != space)
//		{
//			count++;
//			for (j = i; j < str.length(); j++)
//			{
//				if (j == str.length() - 1)
//				{
//					return count;
//				}
//				else if (str.at(j) == space)
//				{
//					i = j - 1;
//					break;
//				}
//			}
//		}
//	}
//
//	return count;
//}
//
//int main(void)
//{
//	string str;
//	getline(cin, str);
//
//	cout << solution(str);
//
//	return 0;
//}