#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m = 10;

	cout << "Введите N: ";
	cin >> n;
	for (int i = 1; i <= n; i++)					
	{
		if (i == 2) cout << i << "\t";
		if (i % 2 == 0) continue;
		bool flag = true;
		for (int j = 2; j<=sqrt(i); j++)
		{
			if (i%j == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag) { cout << i << "\t"; };
	}						
}