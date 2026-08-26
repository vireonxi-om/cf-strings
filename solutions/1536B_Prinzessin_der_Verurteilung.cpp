// Problem: Prinzessin der Verurteilung
// URL: https://codeforces.com/problemset/problem/1536/B
// Rating: 1200
// Tags: brute force, constructive algorithms, strings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[30][30][30];
char s[1100];

void solve(){
    scanf("%d%s", &n, s+1);
    for(int i=0; i<=26; i++){
        for(int j=0; j<=26; j++){
            for(int k=0; k<=26; k++) a[i][j][k]=0;
        }
    }
    for(int i=1; i<=n; i++){
        a[0][0][s[i]-'a'+1]=1;
        if(i<n) a[0][s[i]-'a'+1][s[i+1]-'a'+1]=1;
        if(i<n-1) a[s[i]-'a'+1][s[i+1]-'a'+1][s[i+2]-'a'+1]=1;
    }
    int x, y, z;
    bool can=false;
    for(int i=0; i<=26; i++){
        for(int j=0; j<=26; j++){
            if(i && j==0) continue;
            for(int k=1; k<=26; k++){
                if(a[i][j][k]==0){
                    x=i; y=j; z=k;
                    can=true;
                    break;
                }
            }
            if(can) break;
        }
        if(can) break;
    }

    if(x!=0){
        printf("%c%c%c\n", x-1+'a', y-1+'a', z-1+'a');
    }
    else if(y!=0) printf("%c%c\n", y-1+'a', z-1+'a');
    else printf("%c\n", z-1+'a');

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


// maintenance note (3): add editorial link comment to this file — 2026-08-26
