//突发奇想地灵感

#include <iostream>
#include <cstdlib>
#include<ctime>
#include<Windows.h>
using namespace std;

const int speece = 50;

int main1()
{
	unsigned seed;                      //该算法需要一个起始值，称为种子，以生成数字。如果没有给出一个种子，那么它将在每次运行时产生相同的数字流。
	seed = time(0);        //time 函数返回从 1970 年 1 月 1 日午夜开始到现在逝去的秒数，因此每次运行程序时，它都将提供不同的种子值.请注意，在调用它时必须给它传递一个参数 0。
	srand(seed);                         //要在每次运行程序时获得不同的随机数字流，则必须为随机数生成器提供一个种子以开始。在 C++ 中，这是通过调用 srand 函数完成的。
											//在 rand 被调用之前，srand 函数要先被调用，并且 srand 在整个程序中仅被调用一次。
	int i = rand() % 100 + 1;           //将随机数缩小到了 1 到 100 之间
		
	
	int x = 0;
	while (1)
	{

		int i = rand() % 100 + 1;      
		if (i < 20)
		{
			cout << "1";
			cout << "   ";
		}
		else if (i > 80)
		{
			cout << "0";
			cout << "   ";
		}
		else
		{
			cout << "  ";
		}
		if (x % speece == 0)
		{
			Sleep(25);
		}
		if (x == 4000)
		{
			x = 0;
		}
		x++;

	}
	return 0;
}