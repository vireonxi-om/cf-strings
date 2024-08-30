// Problem: In-game Chat
// URL: https://codeforces.com/problemset/problem/1465/A
// Rating: 800
// Tags: implementation, strings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
char s[110];

void solve(){
    scanf("%d%s", &n, &s);
    int pos=n-1;
    while (s[pos]==')' && pos>=0){
        pos--;
    }
    if(pos+1>=n-pos-1) printf("No\n");
    else printf("Yes\n");
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++) solve();
    return 0;
}