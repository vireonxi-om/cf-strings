// Problem: String LCM
// URL: https://codeforces.com/problemset/problem/1473/B
// Rating: 1000
// Tags: brute force, math, number theory, strings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int la, lb, len;
char a[500], b[500];

int gcd(int x, int y){
    return y==0? x: gcd(y, x%y);
}

void solve(){
    scanf("%s%s", a+1, b+1);
    la=strlen(a+1); lb=strlen(b+1);
    len=la*lb/gcd(la, lb);
    int ta=len/la, tb=len/lb;
    for(int i=1; i<=la; i++){
        for(int j=1; j<=ta; j++){
            a[(j-1)*la+i]=a[i];
        }
    }
    for(int i=1; i<=lb; i++){
        for(int j=1; j<=tb; j++){
            b[(j-1)*lb+i]=b[i];
        }
    }
    a[len+1]='\0';
    bool can=true;
    for(int i=1; i<=len; i++){
        if(a[i]!=b[i]) can=false;
    }
    if(can){
        printf("%s\n", a+1);
    }
    else printf("-1\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
