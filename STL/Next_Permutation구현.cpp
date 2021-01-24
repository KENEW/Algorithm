#include<iostream>
using namespace std;

int arr[5] = {1, 2, 3, 4, 4};

//Worst time = O(n)
bool next_permutation(int* first, int* last)
{
	if(first == last)	return false;	//size 0

	int *i = first;
	++i;

	if(i == last)	return false;	//size 1
	i = last;
	--i;

	while (true)
	{
		int * ii = i;
		--i;

		if (*i < *ii)
		{
			int *j = last;

			while(*i >= *(--j));
			swap(*i, *j);
			reverse(ii, last);
			return true;
		}
		if (i == first)
		{
			reverse(first, last);
			return false;
		}
	}
}

int main(void)
{
	do {
		printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	}
	while(next_permutation(arr, arr + 5));

	return 0;
}