#define _CRT_SECURE_NO_DEPRECATE 1

//让他像流星一样落下来，一竖列整整齐齐

#include <iostream>
#include <cstdlib>
#include<ctime>
#include<Windows.h>

using namespace std;

const int COL = 300;
const int MaxCol = 20;
const int MaxRow = 20;

int main()
{
	system("mode con:cols=100 lines");

	unsigned seed;   
	seed = time(0);    
	srand(seed);  

	int i{};
	int t0_1 = 0;
	int RandCol[MaxCol]{};

	while (1)
	{
		i = rand() % MaxCol + 1;
		for (int n = 0; n < MaxCol; n++)
		{
			i = rand() % MaxCol + 1;
			RandCol[i] = i;
		}
		int x = 0;
		while(x<MaxCol)
		{
			t0_1 = rand() % 2;

			if (RandCol[x] == x)
			{
				cout << t0_1;
			}
			else
			{
				cout << " ";
			}
			Sleep(0.1);
		}


	}

	






	return 0;
}