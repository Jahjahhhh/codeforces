#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    bool f = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            f = 0;
            break;
        }
    }
    if(f) {
        s[0] > 'Z' ? s[0] -= 32 : s[0] += 32;
        for(int i = 1; i < s.size(); i++) s[i] += 32;
    }
    cout << s;
}
