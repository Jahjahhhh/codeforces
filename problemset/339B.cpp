#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int &i : a) cin >> i;

    int x = 1, y, ans = 0;
    for(int i = 0; i < m; i++) {
        y = a[i];
        if(x <= y) ans = y - x;
        else ans += (n - x + y);
    }
    cout << ans;
}
