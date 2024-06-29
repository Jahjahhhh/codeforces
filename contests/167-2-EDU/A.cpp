#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, y; cin >> n;
    while(n--) {
        cin >> x >> y;
        if(y < -1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
