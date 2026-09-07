// Problem:  Déjà Vu
// URL: https://codeforces.com/problemset/problem/1504/A
// Rating: 800
// Tags: constructive algorithms, strings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;
char s[310000], ans[310000];

void solve(){
    scanf("%s", s+1);
    n=strlen(s+1);
    int pos;
    bool yes=false;
    for(int i=1; i<=n; i++){
        if(s[i]!='a') {pos=i; yes=true; break;}
    }
    if(!yes) printf("NO\n");
    else{
        if(pos>n/2) pos++;
        int t=n+2-pos, now=1;
        for(int i=1; i<=n; i++){
            if(now==t){ ans[now]='a'; now++;}
            ans[now]=s[i];
            now++;
        }
        if(now==t) {ans[now]='a'; now++;}
        ans[now]='\0';
        printf("YES\n");
        printf("%s\n", ans+1);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (8): add editorial link comment to this file — 2026-09-07
