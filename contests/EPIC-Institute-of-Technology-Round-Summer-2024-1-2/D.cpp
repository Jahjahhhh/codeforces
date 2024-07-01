#include <bits/stdc++.h>

// Didn't work :(

using namespace std;

int main() {
    int n, t; cin >> t;
    while(t--) {
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a, a + n);
        int max_a = 0, ans = 0;
        for(int i = 0; i < n; i++, n--) {
            if(a[i] > max_a) {
                max_a = a[i];
                ans++;
            }
        }
        cout << ans << endl;
    }
}
