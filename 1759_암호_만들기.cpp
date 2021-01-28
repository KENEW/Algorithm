//#include<iostream>
//#include<algorithm>
//#include<string>
//#define endl "\n"
//using namespace std;
//
//int L, C;
//char ch[16];
//
//void DFS(int curPos, string str, int mo, int ja)
//{
//	if (str.size() == L)
//	{
//		if ((mo >= 1) && (ja >= 2))
//		{
//			cout << str << endl;
//		} 
//
//		return;
//	}
//
//	for (int i = curPos; i < C; i++)
//	{
//		switch (ch[i])
//		{
//		case 'a':
//		case 'e':
//		case 'i':
//		case 'o':
//		case 'u':
//			DFS(i + 1, str + ch[i], mo + 1, ja);
//			break;
//		default:
//			DFS(i + 1, str + ch[i], mo, ja + 1);
//			break;
//		}
//	}
//}
//
//int main(void)
//{
//	cin >> L >> C;
//
//	for (int i = 0; i < C; i++)
//	{
//		cin >> ch[i];
//	}
//
//	sort(ch, ch + C);
//
//	DFS(0, "", 0, 0);
//
//	return 0;
//}