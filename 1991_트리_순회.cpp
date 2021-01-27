//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	char left;
//	char right;
//};
//
//Node node[27];
//
//int N;
//
//void PreOrder(char root)
//{
//	if (root == '.')
//	{
//		return;
//	}
//	cout << root;
//
//	PreOrder(node[root].left);
//	PreOrder(node[root].right);
//}
//void InOrder(char root)
//{
//	if (root == '.')
//	{
//		return;
//	}
//
//	InOrder(node[root].left);
//	cout << root;
//	InOrder(node[root].right);
//}
//void PostOrder(char root)
//{
//	if (root == '.')
//	{
//		return;
//	}
//
//	PostOrder(node[root].left);
//	PostOrder(node[root].right);
//	cout << root;
//}
//
//int main(void)
//{
//	char a, b, c;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> a >> b >> c;
//
//		node[a].left = b;
//		node[a].right = c;
//	}
//
//	PreOrder('A');
//	cout << "\n";
//	InOrder('A');
//	cout << "\n";
//	PostOrder('A');
//	cout << "\n";
//
//	return 0;
//}
