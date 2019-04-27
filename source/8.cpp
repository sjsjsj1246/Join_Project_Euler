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
	
	int mul = 1, temp, Max = 0;
	queue<int> q;
	FOR(i, 0, 5) scanf("%1d", &temp), mul *= temp, q.push(temp);
	Max = mul;
	FOR(i, 0, 1000-5)
	{
		scanf("%1d", &temp);
		q.pop();
		q.push(temp);
		
		queue<int> t = q;
		mul = 1;
		FOR(i, 0, 5)
		{
			mul *= t.front();
			t.pop();
		}
		Max = max(Max, mul);
	}
	cout << Max;
}