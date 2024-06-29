#include <bits/stdc++.h>
// T_T
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, n, t; cin >> t;
    while(t--) {
        cin >> n;
        int a[n], b[n];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        int rat, max_rat = -1;
        for(int i = 0; i < n; i++) {
            rat = min(a[i], b[i]);
            if(rat > max_rat) max_rat = rat;
        }
        cout << max_rat << endl;
    }
}
