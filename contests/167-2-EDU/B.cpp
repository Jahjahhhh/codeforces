#include <bits/stdc++.h>
// GOT FILTERED
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;;
    string a, b;
    while(t--) {
        cin >> a >> b;
        unordered_set<char> s1, s2;
        if(a.length() > b.length()) {
            for(char c : a)
                s1.insert(c);
            for(char c : b)
                s2.insert(c);
        } else {
            for(char c : b)
                s1.insert(c);
            for(char c : a)
                s2.insert(c);
        }
        int ans = 0;
        auto it1 = s1.begin();
        auto it2 = s2.begin();
        for(; it2 != s2.end(); it2++)
            if(s1.find(*it2) == s1.end()) ans++;
        cout << max(a.length(), b.length()) + ans << endl;
    }
}
