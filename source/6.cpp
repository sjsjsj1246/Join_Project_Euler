#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sos = 0, sum = 0;
	for (int i = 1; i <= 100; i++) sos += i * i, sum += i;
	cout << sum * sum - sos;
}