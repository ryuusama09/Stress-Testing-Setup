#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize "trapv"
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,fma") 
#pragma GCC optimize("unroll-loops")
#define int long long

void solve() {
    int n,c; cin >> n >> c;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    int ans = 0;
    for (int x = 1; x <= 1000; x++) {
        int sum = 0;
        for (int i = 0; i < n; i++) 
            sum += (x * a[i])/b[i];
        if (sum == c-n)
            ans++;
    }
    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}