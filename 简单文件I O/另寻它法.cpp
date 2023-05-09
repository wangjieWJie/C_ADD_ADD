#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
#include<fstream>
#include<cstring>


using namespace std;
int main()
{
	ofstream write("test.txt");
	for (int i{}; i <= 57; i++)
	{
		write << "第" << i << "天的房价是：:\n";
	}
	write.close();

	ifstream read("test.txt");
	char nrong[80]{};

	//第一种方法

	read.getline(nrong, 80);
	cout << nrong << endl;        //完美运行

	read.getline(nrong, 80);
	cout << nrong << endl;        //完美运行

	read >> nrong;
	cout << nrong << endl;        //完美运行

	read.getline(nrong, 80);
	cout << nrong << endl;        //运行失败

	read >> nrong;
	cout << nrong << endl;        //完美运行


	//第二种方法
	string str{};
	str=read.get();
	cout << str << endl;        //执行失败




	return 0;
}