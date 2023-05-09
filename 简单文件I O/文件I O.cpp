#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
#include<fstream>
#include<cstring>

int main1()
{
	char cccin{};
	char chin[80]{ "abcdefgh" };
	std::string  stin{ "abcdefgh" };
	std::ofstream a_outfile;
	std::ifstream a_infile;
	a_outfile.open("test.txt");      //输出文字到文本文件中
	a_infile.open("test.txt");       //从文本文件中获取文字
	for (int i{}; i <= 57; i++)
	{
		a_outfile << "第" << i << "天的房价是：\n";
	}
	a_infile.getline(chin, 80);
	//std::cin.getline(a_infile,chin);
	for (int i{}; i <= 57; i++)
	{
		//a_infile >> chin;
		//a_infile >> stin;
		//a_infile >> cccin;
		//a_infile.getline(chin, 80);

		std::cout << chin << std::endl;
		//std::cout << stin;
		//std::cout << cccin;
	}


	return 0;
}