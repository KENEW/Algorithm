//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int stuNumber[1000];
//	int input;
//	int average;
//	int cnt;
//	int stuInput;
//
//	cin >> input;
//
//	for (int i = 0; i < input; i++)
//	{
//		cnt = 0;
//		average = 0;
//
//		cin >> stuInput;
//
//		for (int j = 0; j < stuInput; j++)
//		{
//			cin >> stuNumber[j];
//			average += stuNumber[j];
//		}
//
//		average = average / stuInput;
//
//		for (int j = 0; j < stuInput; j++)
//		{
//			if (stuNumber[j] > average) 
//			{
//				cnt++;
//			}
//		}
//
//		cout << fixed;
//		cout.precision(3);
//		cout << 100 * cnt / (float)stuInput << "%" << endl;
//	}
//
//	return 0;
//}