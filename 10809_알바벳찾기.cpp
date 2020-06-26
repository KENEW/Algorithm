//#include<iostream>
//#include<string.h>
//#define MAXSTR	100
//#define MAXCH	26
//using namespace std;
//
//void calcStr(char ch[])
//{
//	int str[MAXCH];
//
//	for(int i = 0; i < MAXCH; i++)
//	{
//		str[i] = -1;
//	}
//
//	for (int j = 0; j < strlen(ch); j++)
//	{
//		for (int i = 'a' - 'a'; i <= 'z' - 'a'; i++)
//		{	
//			if (ch[j] == (char)97 + i)
//				if (str[i] == (-1))	str[i] = j;
//		}
//	}
//	
//	for (int i = 0; i < MAXCH; i++)
//	{
//		cout << str[i] << " ";
//	}
//}
//
//int main(void)
//{
//	char str[MAXSTR];
//
//	cin >> str;
//
//	calcStr(str);
//
//	return 0;
//}