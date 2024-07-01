#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, ans;
    cin >> a >> b >> c;
    if((a == 1 && b == 1 && c == 1) || (a == 1 && c == 1)) {
        cout << a + b + c;
        return 0;
    }
    if(a == 1 || b == 1 || c == 1) {
        if(a == 1) {
            ans = (a+b)*c;
        } else if(b == 1) {
            ans = max(((b+a)*c), ((b + c)*a));
        } else {
            ans = (c + b)*a;
        }
        cout << ans;
    } else cout << a * b * c;
}
