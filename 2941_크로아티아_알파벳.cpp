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
//		int sub_index = str.find(alpStr.at(idx), 0);				//find(원하는 문자열, 시작 위치);
//		while (sub_index != -1)
//		{
//			str.replace(sub_index, alpStr.at(idx).size(), "|");		//alpStr n번째 사이즈만큼 '|'로 치환
//			sub_index = str.find(alpStr.at(idx), sub_index + 1);	//같은 문자를 뒤에 문자에서도 나올 수도 있으니깐 범위를 지정하고 다시 검색
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