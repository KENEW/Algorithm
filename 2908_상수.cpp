//#include<iostream>
//#include<string>
//using namespace std;
//
//int reverseNum(int num)
//{
//	int result;
//
//	result = (num % 10) * 100;
//	result += ((num % 100) / 10) * 10;
//	result += (num / 100);
//	
//	return result;
//}
//int main() 
//{
//	int inputA, inputB;
//
//	cin >> inputA >> inputB;
//
//	if (reverseNum(inputA) > reverseNum(inputB))
//	{
//		cout << reverseNum(inputA);
//	}
//	else
//	{
//		cout << reverseNum(inputB);
//	}
//
//	return 0;
//
//	/*
//	int index = 2;
//	string A, B;
//
//	cin >> A >> B;
//
//	while (index >= 0) 
//	{
//		if (A[index] == B[index]) 
//		{
//			cout << A[index--];
//			continue;
//		}
//		if (A[index] > B[index])
//			while (index >= 0)
//				cout << A[index--];
//		else
//			while (index >= 0)
//				cout << B[index--];
//	}*/
//}