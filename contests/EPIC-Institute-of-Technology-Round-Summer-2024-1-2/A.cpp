#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, t; cin >> t;
    while(t--) {
        int ans = 0;
        cin >> n >> k;
        ans = ((n - 1) * k) + 1;
        cout << ans << endl;
    }
}
