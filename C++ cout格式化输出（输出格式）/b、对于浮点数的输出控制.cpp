#define _CRT_SECURE_NO_DEPRECATE 1
#include <iostream> 
void main()
{
	float f = 2.0 / 3.0, f1 = 0.000000001, f2 = -9.9;
	cout << f << ' ' << f1 << ' ' << f2 << endl; //正常输出 
	cout.setf(ios::showpos); //强制在正数前加+号 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::showpos); //取消正数前加+号 
	cout.setf(ios::showpoint); //强制显示小数点后的无效0 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::showpoint); //取消显示小数点后的无效0 
	cout.setf(ios::scientific); //科学记数法 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::scientific); //取消科学记数法 
	cout.setf(ios::fixed); //按点输出显示 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::fixed); //取消按点输出显示 
	cout.precision(18); //精度为18，正常为6 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.precision(6); //精度恢复为6 
}
