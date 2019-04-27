#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define FOR(w, a, n) for(int w=(a);w<(n);++w)
#define ALL(a) (a).begin(),(a).end()
#define CASES(t) int aa; cin >> aa; for(int t=1;t<=aa;t++)
#define MOD 1000000007
#define INF 987654321
typedef long long ll;
using namespace std;


int main()
{
	FAST;
	FOR(i, 1, 1000)
	{
		FOR(j, i+1, 1000)
		{
			FOR(k, j+1, 1000)
			{
				if (i + j + k > 1000) continue;
				if (i + j + k == 1000 && i * i + j * j == k * k)
				{
					cout << i * j * k;
					return 0;
				}
			}
		}
	}
}