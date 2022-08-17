#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize "trapv"
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,fma") 
#pragma GCC optimize("unroll-loops")
#define int long long

int const inf = 1e9+5;

bool check(int C,int x,vector<int>& a,vector<int>& b,int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += (x * a[i])/b[i];
    return C <= sum;    
}

bool check2(int C,int x,vector<int>& a,vector<int>& b,int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += (x * a[i])/b[i];
    return C == sum;    
}

void solve() {
    int n,c; cin >> n >> c;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    // c-n <= Summation    Gives minimum x
    // 001111
    int L = 0, R = inf;
    while (R-L > 1) {
        int mid = (L+R)/2;
        if (check(c-n, mid, a, b, n))
            R = mid;
        else
            L = mid;
    }

    // Check for equality
    if (!check2(c-n, R, a, b, n)) {
        cout << "0\n";
        return;
    }

    // 111000  Find max equality
    int lb = R;

    L = lb-1, R = inf;
    while (R-L > 1) {
        int mid = (L+R)/2;
        if (check2(c-n, mid, a, b, n))
            L = mid;
        else
            R = mid;
    }
    int ub = L;
    if (R == inf)
        cout << "1000\n";
    else
        cout << ub - lb + 1ll << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}