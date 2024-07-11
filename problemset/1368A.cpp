#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        int count = 0;
        if (a > b) swap(a, b);
        while (max(a, b) <= n) {
            a += b;
            count++;
            swap(a, b);
        }
        cout << count << endl;
    }
}
