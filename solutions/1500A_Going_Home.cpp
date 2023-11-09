// Problem: Going Home
// URL: https://codeforces.com/problemset/problem/1500/A
// Rating: 1800
// Tags: brute force, hashing, implementation, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, a[210000], sum[6000000][2];

int main(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    bool can=false;
    int t=min(5000, n);
    for(int i=1; i<t; i++){
        for(int j=i+1; j<=t; j++){
            int now=a[i]+a[j];
            if(sum[now][0]==i || sum[now][1]==j || sum[now][1]==i) continue;
            if(sum[now][0]){
                can=true;
                printf("YES\n");
                printf("%d %d %d %d\n", i, j, sum[now][0], sum[now][1]);
                break;
            }
            sum[now][0]=i;
            sum[now][1]=j;
        }
        if(can) break;
    }
    if(!can) printf("NO\n");
}
