#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);						//cin�� cout�� untie.(cin�� ó���ӵ� ����)
										//cin, cerr ��Ʈ���� cout ��Ʈ���� �����־ ����� ������ �ϱ� �� ��� ��Ʈ�� ���� �÷����� �� (ó���ӵ� ����)
										//tie()�� NULL�� �������ν� �����ִ°� ����

	ios::sync_with_stdio(false);		//iostream�� c�� stdio�� ����ȭ �����ִ� ��Ȱ(ó���ӵ� ����) ����?

	int n, ans;
	
	cin >> n;

	if(n < 100)							//100 �̸��� �� ��
		ans = n;
	else
	{
		ans = 99;
		for (int i = 100; i <= n; i++)	//100���� n���� �� �� ���� Ȯ��
		{
			if ((i / 100 - (i % 100) / 10) == ((i % 100) / 10 - (i % 10)))
			{
				cout << i << "\n";
				//(��° �ڸ� �� - ��° �ڸ� ��) == (��° �ڸ� �� - ù° �ڸ� ��)
				ans++;
			}
				
		}
	}

	cout << ans << "\n";
	return 0;
}