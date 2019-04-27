#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define FOR(w, a, n) for(int w=(a);w<(n);++w)
#define ALL(a) (a).begin(),(a).end()
#define CASES(t) int aa; cin >> aa; for(int t=1;t<=aa;t++)
#define MOD 1000000007
#define INF 987654321
typedef long long ll;
using namespace std;

bool prime[2000001] = { 1,1 };

int main()
{
	FAST;
	for (int i = 2; i < 2000001; i++)
	{
		if (prime[i]) continue;
		for (int j = 2; i * j < 2000001; j++)
		{
			prime[i * j] = 1;
		}
	}

	long long sum = 0;
	for (int i = 0; i < 2000001; i++)
	{
		if (prime[i] == 0) sum += i;
	}
	cout << sum;
}