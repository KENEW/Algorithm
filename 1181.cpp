//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//bool Cmp(std::string str1, std::string str2)
//{
//	if(str1.length() == str2.length())
//		return str1 < str2;
//
//	return str1.length() < str2.length();
//}
//
//int main(void)
//{
//	int input;
//	std::cin >> input;
//
//	std::vector<std::string> vec;
//
//	for (int i = 0; i < input; i++)
//	{
//		std::string str;
//
//		std::cin >> str;
//
//		if(std::find(vec.begin(), vec.end(), str) == vec.end())
//			vec.push_back(str);
//	}
//
//	std::sort(vec.begin(), vec.end(), Cmp);
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		std::cout << vec[i] << std::endl;
//	}
//
//	return 0; 
//}