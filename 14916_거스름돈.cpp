//#include <iostream>
//using namespace std;
//#define MAX 100000
//#define infinity 9999999
//
////1. �Ž����� �ص� �ȱ������� ��츦 ���Ѵ�.
//
//int coin_change(int w[], int m)
//{
//	int c[MAX] = { 0, infinity, 0, }, i, k;
//
//	//i�� ���� ���̴�.
//	for (i = 2; i <= m; i++) 
//	{
//		//�ʱⰪ ����
//		c[i] = infinity;
//
//		//�Ž����� ��츦 ���Ѵ�. 2 / 5 ��
//		for (k = 0; k < 2; k++)
//		{
//			if (i >= w[k])	//���絷�� �Ž����� �ϴ� ������ ũ��
//			{
//				if (c[i - w[k]] + 1 < c[i])	//���� ���ǹ��� ����������ϸ� c���� �޸� ���� ������ �����̴�.
//				{
//					//���� c���� �Ž����� �� �ּ� ��쿡�� 1�� �����ش�.
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