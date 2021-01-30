//#include <iostream>
//using namespace std;
//#define MAX 100000
//#define infinity 9999999
//
////1. 거스름을 해도 안구해지는 경우를 구한다.
//
//int coin_change(int w[], int m)
//{
//	int c[MAX] = { 0, infinity, 0, }, i, k;
//
//	//i는 현재 돈이다.
//	for (i = 2; i <= m; i++) 
//	{
//		//초기값 설정
//		c[i] = infinity;
//
//		//거스름의 경우를 구한다. 2 / 5 원
//		for (k = 0; k < 2; k++)
//		{
//			if (i >= w[k])	//현재돈이 거스름을 하는 돈보다 크면
//			{
//				if (c[i - w[k]] + 1 < c[i])	//위에 조건문을 통과하지못하면 c에서 메모리 접근 오류가 날것이다.
//				{
//					//현재 c에서 거스름을 뺀 최소 경우에서 1을 더해준다.
//					c[i] = c[i - w[k]] + 1;
//				}
//			}
//		}
//	}
//	if (c[m] == infinity) 
//	{
//		return -1;
//	}
//
//	return c[m];
//}
//
//int main() 
//{
//	int coin[2] = { 5,2 };
//	int change_coin;
//
//	cin >> change_coin;
//
//	if (change_coin < 2)
//	{
//		cout << -1;
//	}
//	else
//	{
//		cout << coin_change(coin, change_coin);
//	}
//}