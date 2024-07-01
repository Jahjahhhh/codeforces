#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    string h = "hello";

    int j = 0, x = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == h[j]) {
            j++;
            x++;
        }
    }
    x == 5 ? cout << "YES" : cout << "NO";
}
