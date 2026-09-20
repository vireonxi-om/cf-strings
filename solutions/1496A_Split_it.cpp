// Problem: Split it!
// URL: https://codeforces.com/problemset/problem/1496/A
// Rating: 900
// Tags: brute force, constructive algorithms, greedy, strings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, k;
char s[110];

void solve(){
    scanf("%d%d", &n, &k);
    scanf("%s", &s);
    bool can=true;
    for(int i=0; i<k; i++){
        if(s[i]!=s[n-i-1]) can=false;
    }
    if(n<=2*k) can=false;
    if(can) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (13): add editorial link comment to this file — 2026-09-20
