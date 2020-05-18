#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#define MAX_SIZE 10000

using namespace std;

int stack[MAX_SIZE];
int head;

void push(int x)
{	
	stack[++head] = x;
}

int pop()
{
	if (stack[head] <= 0)
	{
		return -1;
	}
	return stack[head--];
}

int size()
{
	return head + 1;
}

int empty()
{
	return !(head != -1);
}

int top()
{
	if (stack[head] <= 0)
	{
		return -1;
	}
	return stack[head];
}

int main(void)
{
	int input;
	char str[20];

	head = -1;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		cin >> str;
		if (!strcmp(str, "push"))
		{
			int temp;
			cin >> temp;

			push(temp);
		}
		else if (!strcmp(str, "top"))
		{
			cout << top() << endl;
		}
		else if (!strcmp(str, "empty"))
		{
			cout << empty() << endl;
		}
		else if (!strcmp(str, "pop"))
		{
			cout << pop() << endl;
		}
		else if (!strcmp(str, "size"))
		{
			cout << size() << endl;
		}
	}

	return 0;
}