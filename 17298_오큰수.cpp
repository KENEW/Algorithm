//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
//
//int main(void)
//{
//	int N;
//	cin >> N;
//
//	vector<int> arr(N);
//	stack<int> st;
//	vector<int> output(N, -1);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		while (!st.empty() && (arr[st.top()] < arr[i]))
//		{
//			output[st.top()] = arr[i];
//			st.pop();
//		}
//
//		st.push(i);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cout << output[i] << ' ';
//	}
//
//	cout << "\n";
//
//	return 0;
//}