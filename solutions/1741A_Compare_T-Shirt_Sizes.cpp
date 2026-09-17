// Problem: Compare T-Shirt Sizes
// URL: https://codeforces.com/problemset/problem/1741/A
// Rating: 800
// Tags: implementation, strings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>

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

const int N = 5100;
const int M = 1100000;
const int mod = 1e9+7;
const int inf = 1e9;
const LL INF = 1e18;
const double eps = 1e-10;

int c(string s) {
    if (s[0] == 'M') return 0;
    int n = s.length();
    if (s[n - 1] == 'L') return n;
    else return (-n);
}

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    int a1 = c(s1), a2 = c(s2);
    string ans;
    if (a1 > a2) ans = ">";
    else if (a1 == a2) ans = "=";
    else ans = "<";
    cout << ans << endl;
}


int main() {
    int t;
    cin >> t;
    rep(i, 0, t) solve();
    return 0;
}
// maintenance note (12): small formatting cleanup on this file — 2026-09-17
