#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main()
{
	srand (time(0));
	bool flag = 1;
	int k, l = 0, x = 0, n = -1, m;
	cin >> k;
	int *a = new int[k];
	int *b = new int[k - 1];
	int *c = new int[k + 1];
	for (int i = 0; i < k; ++i)
	{
		a[i] = rand() % 1000 - 500;
		cout << a[i] << ' ';
	}
	cout << endl;
	cin >> m;
	for (int i = k; i >=0 && flag; --i)
	{
		if (a[i] == 0)
		{
			n = i;
			flag = 0;
		}
		
	}
	if (!flag)
	{
		for (int i = 0; i < k - 1; ++i, ++l)
		{
			if (i != n)
			{
				b[i] = a[l];
			}
			else
			{
				b[i] = a[l + 1];
				++l;
			}
		}
		l = 0;
		for (int i = 0; i < k; ++i, ++l)
		{
			if (i != m)
			{
				a[i] = b[l];
			}
			else
			{
				a[i] = b[l];
				a[i + 1] = 100;
				++i;
			}
		}
		for (int i = 0; i < k; ++i)
		{
			cout << a[i] << ' ';
		}
	}
	else
	{
		l = 0;
		for (int i = 0; i < k + 1; ++i, ++l)
		{
			if (i != m)
			{
				c[i] = a[l];
			}
			else
			{
				c[i] = a[l];
				c[i + 1] = 100;
				++i;
			}
		}
		for (int i = 0; i < k + 1; ++i)
		{
			cout << c[i] << ' ';
		}
	}
}