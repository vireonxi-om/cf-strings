// Problem: Binary Literature
// URL: https://codeforces.com/problemset/problem/1509/D
// Rating: 1900
// Tags: constructive algorithms, greedy, strings, two pointers
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, cnt[5][3], a[210000];
char s[5][210000], ans[310000];

void build(int x, int y, int t){
    char t1='0'+t, t2='0'+1-t;
    if(cnt[x][t2]<cnt[y][t2]) swap(x, y);
    int posx=1, posy=1, pos=1;
    while(posx<=2*n && posy<=2*n){
        if(s[x][posx]==s[y][posy]){
            ans[pos++]=s[x][posx];
            posx++; posy++;
        }
        else if(s[y][posy]==t1){
            ans[pos++]=t1;
            posy++;
        }
        else if(s[y][posy]==t2){
            ans[pos++]=t1;
            posx++;
        }
    }
    while(posx<=2*n){
        ans[pos++]=s[x][posx];
        posx++;
    }
    while(posy<=2*n){
        ans[pos++]=s[y][posy];
        posy++;
    }
    ans[pos]='\0';
}

void solve(){
    scanf("%d", &n);
    scanf("%s%s%s", s[1]+1, s[2]+1, s[3]+1);
    for(int i=1; i<=3; i++){
        int t=0;
        for(int j=1; j<=2*n; j++){
            if(s[i][j]=='0') t++;
        }
        cnt[i][0]=t; cnt[i][1]=2*n-t;
    }
    if(cnt[1][0]<=n){
        if(cnt[2][0]<=n) build(1, 2, 0);
        else if(cnt[3][0]<=n) build(1, 3, 0);
        else build(2, 3, 1);
    }
    else{
        if(cnt[2][1]<=n) build(1, 2, 1);
        else if(cnt[3][1]<=n) build(1, 3, 1);
        else build(2, 3, 0);
    }
    printf("%s\n", ans+1);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}



