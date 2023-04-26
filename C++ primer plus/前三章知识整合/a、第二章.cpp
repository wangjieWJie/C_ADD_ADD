#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
int main()
{
	using namespace std;
	cout << "This is my frist try to write a c++ programe!" << endl;
	int My_salary{};
	cin >> My_salary;
	cout << "i'll get " << My_salary << " yuan per year!" << endl;


	//其实这是第四章的一个内容 

		// 数组的 动态联编
	int size;
	cin >> size;
	int* p = new int [size];
	delete [] p;
		//目前为止，我觉得这是一个完全正确且方便的动态联编过程（其实是照着课本抄的《圣经 P91》）

		//My_test
	char wenzi[20] = "zheshiyigezifuchuan";
	cout<<"这是输出\"wenzi\"的结果：" << wenzi << endl;
	char* p_wenzi = &wenzi[0];
	cout << "这是输出\"wenzi[0]\"的地址p_wenzi的结果:" << p_wenzi << endl;
		//结果他们是相同的，说明p_wenzi和wenzi都是将第一个元素输出之后，cout会接着向后索检直至遇见 \0 为止。
		//书面介绍为: 在cout和多数C++表达式中，char数组名、char指针以及用引号括起来的字符串常量都被解释为字符串第一个字符的地址，然后向后找 \0 





	return 0;
}