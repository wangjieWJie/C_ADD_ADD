#define _CRT_SECURE_NO_DEPRECATE 1
#include <iostream>
using namespace std;
int main()
{
	cout << "第一章" << endl;
	cout << " ";
	cout.setf(ios::left); //设置对齐方式为left 
	cout.width(7); //设置宽度为7，不足用空格填充 
	cout << "1.1";
	cout << "什么是C语言";
	cout.unsetf(ios::left); //取消对齐方式，用缺省right方式 
	cout.fill('.'); //设置填充方式 
	cout.width(30); //设置宽度，只对下条输出有用 
	cout << 1 << endl;
	cout << " ";
	cout.width(7); //设置宽度 
	cout.setf(ios::left); //设置对齐方式为left 
	cout.fill(' '); //设置填充，缺省为空格 
	cout << "1.11";
	cout << "C语言的历史";
	cout.unsetf(ios::left); //取消对齐方式 
	cout.fill('.');
	cout.width(30);
	cout << 58 << endl;
	cout.fill(' ');
	cout << "第二章" << endl;
	return 0;
}
//我们多次设置了宽度，为的是使我们的间距能一致，也使用了对齐方式，为的是使我们的数据能对齐显示，看起来美观。我们还使用了填充方式。
//我们下面用操纵算子来实现也是可以的。

#include <iostream>
#include <iomanip> 
int main()
{
	cout << "第一章" << endl;
	cout << " ";
	cout << setiosflags(ios::left) << setw(7); //设置宽度为7，left对齐方式 
	cout << "1.1";
	cout << "什么是C语言";
	cout << resetiosflags(ios::left); //取消对齐方式 
	cout << setfill('.') << setw(30) << 1 << endl; //宽度为30，填充为'.'输出 
	cout << setfill(' '); //恢复填充为空格 
	cout << " ";
	cout << setw(7) << setiosflags(ios::left); //设置宽度为7，left对齐方式 
	cout << "1.11";
	cout << "C语言的历史";
	cout << resetiosflags(ios::left); //取消对齐方式 
	cout << setfill('.') << setw(30) << 58 << endl; //宽度为30，填充为'.'输出 
	cout << setfill(' ') << "第二章" << endl;
	return 0;
}
//我们输出了同样的效果，不过依我的性格，我更喜欢用操纵算子来进行格式化输出。最后我们看看浮点数的格式输出，如下例：

/*关于浮点数的格式 */

#include <iostream.h> 
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
//同样，我们也一样能用操纵算子实现同样的功能：

/* 关于浮点数的格式 */

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