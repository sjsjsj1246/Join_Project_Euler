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

	int arr[20][20];
	FOR(i, 0, 20) FOR(j, 0, 20) cin >> arr[i][j];

	int Max = 0, mul;

	FOR(i, 0, 20)
	{
		FOR(j, 0, 17)
		{
			mul = 1;
			FOR(k, 0, 4) mul *= arr[i][j + k];
			Max = max(Max, mul);
		}
	}
	FOR(i, 0, 17)
	{
		FOR(j, 0, 20)
		{
			mul = 1;
			FOR(k, 0, 4) mul *= arr[i + k][j];
			Max = max(Max, mul);
		}
	}
	FOR(i, 0, 17)
	{
		FOR(j, 0, 17)
		{
			mul = 1;
			FOR(k, 0, 4) mul *= arr[i + k][j + k];
			Max = max(Max, mul);
		}
	}
	FOR(i, 3, 20)
	{
		FOR(j, 0, 17)
		{
			mul = 1;
			FOR(k, 0, 4) mul *= arr[i - k][j + k];
			Max = max(Max, mul);
		}
	}
	cout << Max;
}
