// Problem: Asterisk-Minor Template
// URL: https://codeforces.com/problemset/problem/1796/B
// Rating: 1000
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
#define IO cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i,a,n) for (int i = a; i < n; i++)
#define repn(i,a,n) for (int i = a; i <= n; i++)
#define per(i,a,n) for (int i = n - 1; i >= a; i--)
#define pern(i,a,n) for (int i = n; i >= a; i--)

typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;

const int N = 2000000;
const int M = 51000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;


void solve() {
	string s, t;
	cin >> s >> t;
	int a = s.length(), b = t.length();
	bool can = false;
	string ans;
	rep(i, 0, a - 1) {
		if (can) break;
		rep(j, 0, b - 1) {
			if (can) break;
			if (s[i] == t[j] && s[i + 1] == t[j + 1]) {
				can = true;
				ans = "****";
				ans[1] = s[i]; ans[2] = s[i + 1];
			}
		}	
	}
	if (s[0] == t[0]) {
		can = true;
		ans = "**";
		ans[0] = s[0];
	} 
	else if (s[a - 1] == t[b - 1]) {
		can = true;
		ans = "**";
		ans[1] = s[a - 1];
	}
	if (can) {
		cout << "YES\n";
		cout << ans << "\n";
	}
	else cout << "NO\n";
}
 
int main() {
	IO;
	int t;
	cin >> t;
	repn(i, 1, t) solve(); 
	return 0;	
	
}



