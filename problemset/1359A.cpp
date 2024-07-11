#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

	int n, m, k;
    for (int i = 0; i < t; i++) {
        cin >> n >> m >> k;
        int d = n / k;
        int a = min(m, d);
        int b = (m - a + k - 2) / (k - 1);
        cout << a - b << endl;
    }

    return 0;
}
