#include<iostream>
#include<string>
using namespace std;

int strlen1(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	return len;
}
int strlen2(char* str)
{
	int len = 0;
	while (str[++len]);
	return len;
}
void strcpy(char* p1, char* p2)
{
	for (int i = 0; p2[i] != '\0'; ++i)
	{
		p1[i] = p2[i];
	}
}
int strcmp(const char* s1, const char* s2)
{
	unsigned char c1, c2;

	while (1)
	{
		c1 = *s1++;
		c2 = *s2++;

		if (c1 != c2)
		{
			return c1 < c2 ? -1 : 1;
		}
		if (!c1)
		{
			break;
		}
	}

	return 0;
}
int main(void)
{
	char *p1, *p2;

	p1 = new char[100];
	p2 = new char[100];

	cin >> p1;

	cout << strlen2(p1);

	return 0;
}