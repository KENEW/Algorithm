//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cstdio>
//#include<cmath>
//
//using namespace std;
//
//typedef long long ll;
//
////세그먼트 트리
//
//void Init(vector<int>& arr, vector<int>& tree, int node, int start, int end)
//{
//	if (start == end)
//	{
//		tree[node] = start;
//	}
//	else
//	{
//		int mid = (start + end) / 2;
//		Init(arr, tree, node * 2, start, mid);
//		Init(arr, tree, node * 2 + 1, mid + 1, end);
//
//		if (arr[tree[node * 2]] <= arr[tree[node * 2 + 1]])
//		{
//			tree[node] = tree[node * 2];
//		}
//		else
//		{
//			tree[node] = tree[node * 2 + 1];
//		}
//	}
//}
//
//int Query(vector<int>& arr, vector<int>& tree, int node, int start, int end, int left, int right)
//{
//	if (left > end || right < start)
//	{
//		return -1;
//	}
//	if (left <= start && end <= right)
//	{
//		return tree[node];
//	}
//
//	int mid = (start + end) / 2;
//	int m1 = Query(arr, tree, node * 2, start, mid, left, right);
//	int m2 = Query(arr, tree, node * 2 + 1, mid + 1, end, left, right);
//
//	if (m1 == -1)
//	{
//		return m2;
//	}
//	else if (m2 == -1)
//	{
//		return m1;
//	}
//	else
//	{
//		if (arr[m1] <= arr[m2])
//		{
//			return m1;
//		}
//		else
//		{
//			return m2;
//		}
//	}
//}
//
//ll GetMax(vector<int>& arr, vector<int>& tree, int start, int end)
//{
//	int n = arr.size();
//	int m = Query(arr, tree, 1, 0, n - 1, start, end);
//	
//	ll area = (ll)(end - start + 1) * (ll)arr[m];
//
//	if (start <= m - 1)
//	{
//		ll tmp = GetMax(arr, tree, start, m - 1);
//
//		if (area < tmp)
//		{
//			area = tmp;
//		}
//	}
//
//	if (m + 1 <= end)
//	{
//		ll tmp = GetMax(arr, tree, m + 1, end);
//		if (area < tmp)
//		{
//			area = tmp;
//		}
//	}
//
//	return area;
//}
//
//int main(void)
//{
//	while (1)
//	{
//		int n;
//		scanf("%d", &n);
//
//		if (n == 0)
//		{
//			break;
//		}
//
//		vector<int> arr(n);
//
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//
//		int h = (int)(ceil(log2(n)) + 1e-9);
//		int tree_size = (1 << (h + 1));
//
//		vector<int> tree(tree_size);
//
//		Init(arr, tree, 1, 0, n - 1);
//
//		printf("%lld\n", GetMax(arr, tree, 0, n - 1));
//	}
//
//	return 0;
//}