/*
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int a = 0;
	cin >> str;
	for (int i = 0; i <str.length(); i++)
	{
		a += str[i]-'0';
	}
	string str1 = to_string(a);
	int x = str1.length();
	for (int i = 0; i < x-1; i++)
	{
		switch (str1[i] - '0')
		{
		case 1:cout << "yi ";
			break;
		case 2:cout << "er ";
			break;
		case 3:cout << "san ";
			break;
		case 4:cout << "si ";
			break;
		case 5:cout << "wu ";
			break;
		case 6:cout << "liu ";
			break;
		case 7:cout << "qi ";
			break;
		case 8:cout << "ba ";
			break;
		case 9:cout << "jiu ";
			break;
		case 0:cout << "ling ";
			break;
		}
	}
	switch (str1[x-1] - '0')
	{
	case 1:cout << "yi";
		break;
	case 2:cout << "er";
		break;
	case 3:cout << "san";
		break;
	case 4:cout << "si";
		break;
	case 5:cout << "wu";
		break;
	case 6:cout << "liu";
		break;
	case 7:cout << "qi";
		break;
	case 8:cout << "ba";
		break;
	case 9:cout << "jiu";
		break;
	case 0:cout << "ling";
		break;
	}
	return 0;
}
