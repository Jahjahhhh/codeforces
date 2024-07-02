#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    int ans = 0;
    ans += a;
    while(a >= b) {
	a -= b;
	a++;
	ans++;
    }
    cout << ans;
}
