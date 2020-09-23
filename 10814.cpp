//#include<iostream>
//using namespace std;
//
//void Solution(int age[], string name[], int input)
//{
//	int i, j;
//
//	int keyTemp;
//	string strTemp;
//
//	for (i = 1; i < input; i++)er
//	{
//		keyTemp = age[i];
//		strTemp = name[i];
//
//		for (j = i - 1; j >= 0 && age[j] > keyTemp; j--)
//		{
//			age[j + 1] = age[j];
//			name[j + 1] = name[j];
//		}
//
//		age[j + 1] = keyTemp;
//		name[j + 1] = strTemp;
//	}
//
//	for (int i = 0; i < input; i++)
//	{
//		cout << age[i] << ' ' << name[i] << '\n';
//	}
//}
//
//int main(void)
//{
//	int input;
//	cin >> input;
//
//	int *age = new int[input];
//	string *name = new string[input];
//
//	for (int i = 0; i < input; i++)
//	{
//		cin >> age[i] >> name[i];
//	}
//
//	Solution(age, name, input);
//
//	return 0;
//}