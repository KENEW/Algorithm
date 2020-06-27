//#include<iostream>
//#include<string>
//using namespace std;
//
//
//void soloution(string str)
//{
//	int arr[26] = {0,};
//	int maxNum, maxChar = 0;
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		if(str.at(i) <= 'Z')
//		{
//			arr[str.at(i) - 'A']++;
//		}
//		else
//		{
//			arr[str.at(i) - 'a']++;
//		}
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		if(i == 0)	
//		{
//			maxNum = arr[i];
//			maxChar = i;
//		}
//		else if (maxNum == arr[i])
//		{
//			maxChar = -1;
//		}
//		else if (maxNum < arr[i])
//		{
//			maxNum = arr[i];
//			maxChar = i;
//		}
// 	}
//	if(maxChar == -1)	cout << '?';
//	else cout << (char)('A' + maxChar);
//}
//
//int main(void)
//{
//	string str;	
//	cin >> str;
//
//	soloution(str);
//
//	return 0;
//}