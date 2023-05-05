#define _CRT_SECURE_NO_DEPRECATE 1
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double y = 19.0123456789;
	int x = 65;

	cout.fill('0');       //设置填充方式为0；
	cout << setw(5) << x << endl;//控制输出位宽为5，右对齐。

	cout.setf(ios::left); //设置对齐方式为left 
	cout.width(7); //设置宽度为7，不足用空格填充 
	cout << "1.1" << endl;

	cout.unsetf(ios::left); //取消对齐方式，用缺省right方式 
	cout.fill('.'); //设置填充方式 
	cout.width(30); //设置宽度，只对下条输出有用 
	cout << 1 << endl;

	cout << setiosflags(ios::left) << setw(7); //设置宽度为7，left对齐方式 
	cout << 1.1 << endl;

	cout << resetiosflags(ios::left); //取消对齐方式 
	cout << setfill('.') << setw(30) << 1 << endl; //宽度为30，填充为'.'输出 

	cout << y << setprecision(4) << endl;//控制输出精度

	return 0;
}
