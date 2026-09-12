// Problem: Make Them Equal
// URL: https://codeforces.com/problemset/problem/1594/C
// Rating: 1200
// Tags: brute force, greedy, math, strings
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
const int mod = 1000000007;
const int inf = (int)1e9;
const double eps = 1e-9;
const LL INF = 1e15;
const int maxn = 100010;

int n, a[310000];
char s[310000], c[5];


void solve(){
    scanf("%d%s%s", &n, c + 1, s + 1);
    repn(i, 1, n) a[i] = 0;
    int cnt = 0;
    repn(i, 1, n) {
        if (s[i] != c[1]){ a[i] = 1; cnt ++;}
    }
    repn(i, 1, n) {
        if (a[i]) continue;
        repn(j, 2, n) {
            if (i * j > n) break;
            if (a[i * j]) a[i] = 1;
        }
    }
    int t = -1;
    repn(i, 1, n){
        if (!a[i]){
            t = i;
            break;
        }
    }
    if (a[n]) {
        if (t > 0) {
            printf("1\n%d\n", t);
        }
        else printf("2\n%d %d\n", n, n - 1);
    }
    else if (cnt) printf("1\n%d\n", n);
    else printf("0\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}

// maintenance note (10): add complexity note to this file — 2026-09-12
