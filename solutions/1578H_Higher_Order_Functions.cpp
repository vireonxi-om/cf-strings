// Problem: Higher Order Functions
// URL: https://codeforces.com/problemset/problem/1578/H
// Rating: 1700
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

const int N = 110000;
const int M = 1100000;
const int mod = 1e9+7;
const int inf = (int)1e9;
const double eps = 1e-9;

int n, tail;
char s[N];
PII st[N];
int main()
{
	IO;
	scanf("%s", s + 1);
	n = strlen(s + 1);
	int cur = 0, ord = 0;
	s[0] = '(', s[n + 1] = ')';
	repn(i, 0, n + 1) {
		if (s[i] == '(') st[++tail]=mp(++cur,0);
		else if (s[i] == ')') {
			int mx = 0, flag = 0;
			while (1) {
				if (tail == 0) break;
				if (st[tail].fi > cur) {
					if (flag) mx = max(st[tail].se + 1, mx);
					else mx = st[tail].se;
					flag = 1;
					tail--;
				}
				else {
					tail--;
					break;
				}
			}
			st[++tail]=mp(cur, mx);
			cur--;
		}
	}
	cout << st[1].se << endl;
	return 0;
}