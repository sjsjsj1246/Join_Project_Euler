#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n = 600851475143;

	int Max = 0;
	for (int i = 2; i < n; i++)
	{
		while ((n % i) == 0)
		{
			n /= i;
			Max = i;
		}
	}
	cout << max(Max, (int)n);
}