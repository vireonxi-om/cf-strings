// Problem: Even Subarrays
// URL: https://codeforces.com/problemset/problem/1731/C
// Rating: 1700
// Tags: bitmasks, brute force, hashing, math, number theory
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

const int N = 210000;
const int M = 110000;
const int mod = 1000000007;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int a[N], n, b[N], x[2 * N];

void solve() {
	repn(i, 0, 2 * n) x[i] = 0;
	cin >> n;
	repn(i, 1, n) cin >> a[i];
	LL cnt = 0, cnt1 = 0, cnt0 = 0;
	repn(i, 1, n) {
		b[i] = a[i] ^ b[i - 1];
		x[b[i]] ++;	
		//cout << b[i] << " ";
	} 
	//cout << "\n";
	for (int num = 1; num * num <= 2 * n; num ++){
		repn(i, 1, n) {
			int cur = (num * num) ^ b[i];
			if (cur >= 2 * n) continue;
			cnt += x[cur];
			if (cur == 0) {
				cnt1 ++;
			}
		}
		//cout << num << " " << cnt << "\n";
	}
	//cout << cnt1 << " " << cnt0 << "\n";
	cnt /= 2;
	cnt += cnt1;
	cnt += x[0];
	//cnt += cnt0 * (cnt0 - 1) / 2;
	repn(i, 0, 2 * n) {
		if (!x[i]) continue;
		cnt += (LL)x[i] * (x[i] - 1) / 2;
	}

	cnt = (LL)n * (n + 1) / 2 - cnt;
	cout << cnt << "\n";
}

int main() {
    IO;
    int t;
	cin >> t;
	repn(i, 1, t) solve(); 
    return 0;
}




// maintenance note (7): minor readability pass on this file — 2026-09-05
