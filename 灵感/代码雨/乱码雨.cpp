#define _CRT_SECURE_NO_DEPRECATE 1

#include <iostream>
#include <cstdlib>
#include<ctime>
#include<Windows.h>
using namespace std;

const int speece = 50;

int main()
{
	unsigned seed;                     
	seed = time(0);      
	srand(seed);                        
	int i = rand() % 100 + 1;         
	char LMa = 0;


	int x = 0;
	while (1)
	{
		LMa = rand() % 158 - 31;              //ÆäÖÐ°üº¬ ring
		int i = rand() % 100 + 1;
		if (i < 20)
		{
			cout << LMa;
			cout << "   ";
		}
		else if (i > 80)
		{
			cout << LMa;
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