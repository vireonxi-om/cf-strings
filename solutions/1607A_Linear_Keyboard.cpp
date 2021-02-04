// Problem: Linear Keyboard
// URL: https://codeforces.com/problemset/problem/1607/A
// Rating: 800
// Tags: implementation, strings
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
 
const int N = 410000;
const int M = 1100000;
const int mod = 1e9+7;
const int inf = 1e9;
const LL INF = 1e18;
const double eps = 1e-9;

int n, num[30];
char a[30], b[60];

void solve() {
	scanf("%s%s", a + 1, b + 1);
	repn(i, 1, 26) num[a[i] - 'a'] = i;
	int tot = strlen(b + 1), ans = 0;
	rep(i, 1, tot) {
		ans += abs(num[b[i + 1] - 'a'] - num[b[i] - 'a']);
	}
	printf("%d\n", ans);
}

int main() {
	int t;
	scanf("%d", &t);
	repn(i, 1, t) solve();
	return 0;
}














