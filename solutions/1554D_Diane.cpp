// Problem: Diane
// URL: https://codeforces.com/problemset/problem/1554/D
// Rating: 1800
// Tags: constructive algorithms, greedy, strings
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
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-9;
const LL INF = 1e15;

int n;
vector<char> a;

void solve(){
    scanf("%d", &n);
    a.clear();
    if (n == 1) printf("a\n");
    else {
        int t = n / 2;
        repn(i, 1, t) a.pb('a');
        a.pb('b');
        if (n % 2) a.pb('c');
        rep(i, 1, t) a.pb('a');
        for (auto x : a) printf("%c", x);
        printf("\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}



