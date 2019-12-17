#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, j, m = 10;
	bool flag = false;

	cout << "Введите N: ";
	cin >> n;
//	cout << "1\t2\t";
	for (i = 1; i <= 2; i++)							//проверяем исключения 1 и 2 (бессмысленно)
	{
		for (j = 1; j <= 2; j++)
		{
			if (i % j == 0) { flag = true; };
		}
		cout << i << "\t";
	}

	for (i = 3; i <= n; i += 2)							//проверяем остальное до N
	{
		if (i % 2 == 0) continue;
		for (j = 1; j <= sqrt(n); j += 2)
		{
			if (i%j == 0)
			{
				flag = true;
			}
		}
		if (flag) { cout << i << "\t"; };
	}													//
}