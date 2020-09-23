#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(void)
{
	while (1)
	{
		stack<char> st;
		string str;

		bool isCheck = true;

		std::getline(std::cin, str);

		for (int i = 0; i < str.length(); i++)
		{
			if (str.at(i) == '.')
			{
				if (i == 0)
				{
					return 0;
				}

				break;
			}

			if ((str.at(i) == '(') || (str.at(i) == '['))
			{
				st.push(str.at(i));
			}

			else if ((str.at(i) == ')') || (str.at(i) == ']'))
			{
				if (st.empty())
				{
					isCheck = false;
				}
				else
				{
					if (st.top() == '(')
					{
						if (str.at(i) == ')')
						{
							st.pop();
						}
					}
					else if (st.top() == '[')
					{
						if (str.at(i) == ']')
						{
							st.pop();
						}
					}
				}
			}
		}

		

		if (isCheck)
		{
			isCheck = st.empty();

			if (!isCheck)
			{
				cout << "NO" << '\n';

			}
			else
			{
				cout << "YES" << '\n';

			}
		}
		else
		{
			cout << "NO" << '\n';
		}
	}

	return 0;
}