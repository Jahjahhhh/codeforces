#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, t; cin >> t;
    while(t--) {
        cin >> n;
        int a[n], prev = 0;
        bool f = 1;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] < prev) f = 0;
            prev = a[i];
        }
        if(f) cout << "incr"; else cout << "decr";
    }
}
