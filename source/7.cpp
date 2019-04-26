#include <bits/stdc++.h>
using namespace std;

bool prime[1000000] = { 1,1 };

int main()
{
	for (int i = 2; i < 1000000; i++)
	{
		if (prime[i] == 0)
		{
			for (int j = 2; i * j < 1000000; j++)
			{
				prime[i * j] = 1;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < 1000000; i++)
	{
		if(prime[i] == 0)
			cnt++;
		if (cnt == 10001)
		{
			cout << i;
			break;
		}
 	}
}