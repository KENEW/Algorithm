//#include<iostream>
//#include<string.h>
//
//#define MAXSTR 100
//using namespace std;
//
//int calcNumber(char ch)
//{
//	int convCh = ch - ('A');
//	int devCh = (convCh / 3) + 3;
//
//	if (ch >= 'P')
//	{
//		if(ch <= 'S')
//			devCh = 7;
//		else if(ch <= 'V')
//			devCh = 8;
//		else if(ch <= 'Z')
//			devCh = 9;
//		else
//			devCh = 10;	
//
//		devCh++;
//	}
//	return devCh ;
//}
//
//int main(void)
//{
//	int result = 0;
//	char ch[30];
//	cin >> ch;
//
//	for(int i = 0; i < strlen(ch); i++)
//	{
//		result += calcNumber(ch[i]);
//		//cout << calcNumber(ch[i]) << endl;
//	}
//
//	cout << result;
//	return 0;
//}