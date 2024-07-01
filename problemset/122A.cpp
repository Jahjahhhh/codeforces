#include <bits/stdc++.h>

using namespace std;

bool is_lucky(int n) {
    bool ans = true;
    while(n > 0) {
        if((n % 10 != 7) && (n % 10 != 4)) ans = false;
        n /= 10;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    bool f = 1;
    for(int i = 1; i <= n; i++) {
        if(is_lucky(i)) {
            if(n % i == 0) {
                cout << "YES";
                f = 0;
                break;
            }
        }
    }
    if(f) cout << "NO";
}
