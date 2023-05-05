#define _CRT_SECURE_NO_DEPRECATE 1
#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	float f = 2.0 / 3.0, f1 = 0.000000001, f2 = -9.9;
	cout << f << ' ' << f1 << ' ' << f2 << endl; //正常输出 
	cout << setiosflags(ios::showpos); //强制在正数前加+号 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::showpos); //取消正数前加+号 
	cout << setiosflags(ios::showpoint); //强制显示小数点后的无效0 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::showpoint); //取消显示小数点后的无效0 
	cout << setiosflags(ios::scientific); //科学记数法 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::scientific); //取消科学记数法 
	cout << setiosflags(ios::fixed); //按点输出显示 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::fixed); //取消按点输出显示 
	cout << setprecision(18); //精度为18，正常为6 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << setprecision(6); //精度恢复为6 
	return 0;
}
