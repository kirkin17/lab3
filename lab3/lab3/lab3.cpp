#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, i, j, m = 10;
	cin >> n;
	cout << "1\t2\t";
	for (i = 3; i <= sqrt(n); i += 2)
	{
		for (j = 3; j <= n; j += 2)
		{
			if (i%j == 0)
			{
				for (i; i <= m; m += 10)
				{
					cout << i << "\t";
				}
			}
		}
	}
}