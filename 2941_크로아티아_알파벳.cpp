//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//vector<string> alpStr = {"c=", "c-","dz=","d-","lj","nj","s=","z="};
//
//int main(void)
//{
//	string str;
//	int count = 0;
//	cin >> str;
//
//	for (int idx = 0; idx < str.size(); idx++)
//	{
//		int sub_index = str.find(alpStr.at(idx), 0);				//find(���ϴ� ���ڿ�, ���� ��ġ);
//		while (sub_index != -1)
//		{
//			str.replace(sub_index, alpStr.at(idx).size(), "|");		//alpStr n��° �����ŭ '|'�� ġȯ
//			sub_index = str.find(alpStr.at(idx), sub_index + 1);	//���� ���ڸ� �ڿ� ���ڿ����� ���� ���� �����ϱ� ������ �����ϰ� �ٽ� �˻�
//			count++;
//		}
//	}
//
//	for (int startIDX = 0; startIDX < str.length(); startIDX++)
//	{
//		if(str.at(startIDX) != '|')
//			count++;
//	}
//
//	cout << count;
//
//	return 0;
//}