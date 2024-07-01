#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t; cin >> t;
    while(t--) {
        cin >> n;
        int h[n];
        for(int &i : h) cin >> i;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans = max(ans, h[i] + i);
        }
        cout << ans << endl;
    }
}
