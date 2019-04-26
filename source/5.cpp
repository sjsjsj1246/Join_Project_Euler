#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	for (i = 11;; i++)
	{
		bool flag = 1;
		for (int j = 2; j < 20; j++)
		{
			if (i % j != 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag) break;
	}
	cout << i;
}