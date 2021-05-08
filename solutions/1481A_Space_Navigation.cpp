// Problem: Space Navigation 
// URL: https://codeforces.com/problemset/problem/1481/A
// Rating: 800
// Tags: greedy, strings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int l, r, u, d, x, y;
char s[110000];

void solve(){
    scanf("%d%d", &x, &y);
    scanf("%s", &s);
    int len=strlen(s);
    l=0; u=0; d=0; r=0;
    for(int i=0; i<len; i++){
        if(s[i]=='L') l++;
        if(s[i]=='U') u++;
        if(s[i]=='D') d++;
        if(s[i]=='R') r++;
    }
    bool can=true;
    if(x>0) if(r<x) can=false;
    if(x<0) if(l<0-x) can=false;
    if(y>0) if(u<y) can=false;
    if(y<0) if(d<0-y) can=false;
    if(can) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}