//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	int stack[100000];
//	int head = -1;
//	int input;
//
//	int sum = 0;
//
//	cin >> input;
//
//	for (int i = 0; i < input; i++)
//	{
//		int temp;
//		cin >> temp;
//
//		if (temp != 0)
//			stack[++head] = temp;
//		else
//			head--;
//	}
//
//	while (head != -1)
//	{
//		sum += stack[head];
//		head--;
//	}
//
//	cout << sum;
//
//	return 0;
//}
