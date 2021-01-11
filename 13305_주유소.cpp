//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//long long N;
//long long roadLength[100000];
//long long money[100001];
//
//int main(void)
//{
//	cin >> N;
//
//	for (int i = 0; i < N - 1; i++)
//	{
//		cin >> roadLength[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> money[i];
//	}
//
//	long long curMoney = money[0];
//	long long t_km = curMoney * roadLength[0];
//
//	for (int i = 1; i < N - 1; i++)
//	{
//		if (curMoney > money[i])
//		{
//			curMoney = money[i];
//		}
//
//		t_km += roadLength[i] * curMoney;
//	}
//
//	cout << t_km;
//
//	return 0;
//}