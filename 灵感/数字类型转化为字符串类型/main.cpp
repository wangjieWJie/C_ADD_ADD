#include<iostream>

double flt_is(double all);           
int wei_shu(int a);
std::string turn_int_into_char(int a);
std::string turn_flt_into_char(double a);


int wei_shu(int a)           //计算一个整数有几位的函数
{
	if (a == 0)
	{
		return 1;
	}
	int ws = 0;
	int b = a;
	while (b)
	{
		b /= 10;
		ws++;
	}
	return ws;

}



std::string turn_int_into_char(int a)              //将一个整数转化为string字符串的函数     ，  如果需要char* 型 则需要用 .c_str() 方法进行转换
{
	int ws = wei_shu(a);
	int* one_num = new int[ws];
	std::string the_char_int{};
	std::string a_num{};
	for (int i = 0; i < ws; i++)
	{
		one_num[ws - i - 1] = a % 10;
		a /= 10;
	}
	for (int i = 0; i < ws; i++)
	{
		the_char_int += ('0' + one_num[i]);
	}
	delete[ws] one_num;
	
	return the_char_int;
}



std::string turn_flt_into_char(double a)              //将一个浮点型转化为字符串，但是因为double的精度太有问题了，所以只能用float，四舍五入后只有八位小数
{
	std::string char_int = turn_int_into_char(int(a));

	// 以上是这个数的整数部分的转化过程

	//下面是这个数的小数部分的转化过程
	float a_flt = flt_is(a);              //将这个数的小数部分提取出来，，，， //最多保留小数点后8位小数（因为double 的精度太有问题了，所以要用 float )

	if (a_flt)                        //如果有小数，那么就开始把这个数的小数转化成整数，并进而转化成字符串类型
	{
		while (flt_is(a_flt))
		{
			a_flt *= 10;
		}

	}
	std::string char_flt = turn_int_into_char(a_flt);

	return char_int + "." + char_flt;
}




double flt_is(double all)            //返回一个浮点型的小数部分，如果没有小数，那么就返回 0
{
	all *= 1000;
	all /= 1000;
	int int_a = all;
	double rtn_flt = all - int_a;
	std::cout << rtn_flt << std::endl;
	return rtn_flt;
}


int main()
{

	std::string ch_test = turn_flt_into_char(3.1415123456).c_str();        
	std::cout << ch_test << std::endl;

	return 0;
}