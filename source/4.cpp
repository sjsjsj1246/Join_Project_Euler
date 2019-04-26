#include <bits/stdc++.h>
using namespace std;

int main()
{
	int Max = 0;
	for (int i = 1; i < 1000; i++)
	{
		for (int j = i; j < 1000; j++)
		{
			int n = i * j;
			int temp = n, rev_n = 0;
			while (temp > 0)
			{
				rev_n = rev_n * 10 + temp % 10;
				temp /= 10;
			}
			if (n == rev_n) Max = max(Max, n);
		}
	}
	cout << Max;
}