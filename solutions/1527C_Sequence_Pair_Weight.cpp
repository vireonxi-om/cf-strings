// Problem: Sequence Pair Weight
// URL: https://codeforces.com/problemset/problem/1527/C
// Rating: 1600
// Tags: hashing, implementation, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
set<pair<ll, ll>> s;

void solve(){
    s.clear();
    scanf("%d", &n);
    ll num;
    for(ll i=1; i<=n; i++){
        scanf("%lld", &num);
        s.insert(make_pair(num, i));
    }
    ll now=0, sum;
    ll ans=0;
    while(!s.empty()){
        auto it=s.begin();
        num=(*it).first;
        ll id=(*it).second;
        if(now!=num){
            now=num; sum=id;
        }
        else{
            ans+=sum*(n-id+1);
            sum+=id;
        }
        s.erase(it);
    }
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (2): small formatting cleanup on this file — 2026-08-23
