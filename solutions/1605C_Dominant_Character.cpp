// Problem: Dominant Character
// URL: https://codeforces.com/problemset/problem/1605/C
// Rating: 1400
// Tags: brute force, greedy, implementation, strings
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>
 
using namespace std;
 
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LC k<<1
#define RC k<<1|1
#define IO cin.sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repn(i, a, n) for (int i = a; i <= n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define pern(i, a, n) for (int i = n; i >= a; i--)
 
typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;
 
const int N = 1100;
const int M = 1100000;
const int mod = 1e9+7;
const int inf = 1e9;
const LL INF = 1e18;
const double eps = 1e-9;
 
int n;
int ans;
char s[M];

void solve(){
	scanf("%d%s", &n, s + 1);
	ans = 1e7;
	repn(i, 1, n - 1) if (s[i] == 'a' && s[i + 1] == 'a') ans = min(ans, 2);
	repn(i, 1, n - 2) if (s[i] == 'a' && s[i + 2] == 'a') ans = min(ans, 3);
	repn(i, 1, n - 3) {
		if (s[i] == 'a' && s[i + 3] == 'a' && s[i + 1] != s[i + 2]) ans = min(ans, 4);
	}
	repn(i, 1, n - 6) {
		if (s[i] == 'a' && s[i + 3] == 'a' && s[i + 6] == 'a' && s[i + 1] == s[i + 2] && s[i + 4] == s[i + 5] && s[i + 1] != s[i + 4]) ans = min(ans, 7);
	}
	if (ans <= n) printf("%d\n", ans);
	else printf("-1\n");
}
 
int main() {
	int t;
	scanf("%d", &t);
	repn(i, 1, t) solve();
	return 0;
}
// maintenance note (1): add complexity note to this file — 2026-08-21
// maintenance note (15): minor readability pass on this file — 2026-09-25
