//#include<iostream>
//using namespace std;
//
//int sugarCalc(int num)
//{
//	int count = 0;
//	int sugar = num;
//
//	while (true)
//	{
//		if ((sugar - 5) % 5 != 3)
//		{
//			sugar -= 5;
//			count++;
//		}
//		else if ((sugar - 3) % 3 == 0)
//		{
//			sugar -= 3;
//			count++;
//		}
//		else if (count % 5 == 0)
//		{
//			count += sugar / 5;
//		}
//		else if (count % 3 == 0)
//		{
//			count += sugar / 3;
//		}
//
//	}
//
//	return sugar == 0 ? count : -1;
//}
//
//int main(void)
//{
//	int input;
//	while (true)
//	{
//		cin >> input;
//
//		cout << sugarCalc(input);
//	}
//
//
//	return 0;
//}