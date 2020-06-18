#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);						//cin과 cout을 untie.(cin의 처리속도 증가)
										//cin, cerr 스트림과 cout 스트림이 묶여있어서 입출력 동작을 하기 전 출력 스트링 버퍼 플러쉬를 함 (처리속도 증가)
										//tie()에 NULL을 넣음으로써 묶여있는걸 헤제

	ios::sync_with_stdio(false);		//iostream을 c의 stdio와 동기화 시켜주는 역활(처리속도 증가) 끄는?

	int n, ans;
	
	cin >> n;

	if(n < 100)							//100 미만은 한 수
		ans = n;
	else
	{
		ans = 99;
		for (int i = 100; i <= n; i++)	//100부터 n까지 한 수 인지 확인
		{
			if ((i / 100 - (i % 100) / 10) == ((i % 100) / 10 - (i % 10)))
			{
				cout << i << "\n";
				//(셋째 자리 수 - 둘째 자리 수) == (둘째 자리 수 - 첫째 자리 수)
				ans++;
			}
				
		}
	}

	cout << ans << "\n";
	return 0;
}