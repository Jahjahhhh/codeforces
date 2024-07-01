#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    map<string, int> m;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(m.find(s) != m.end()) {
            m[s]++;
        } else {
            m[s] = 1;
        }
    }
    int ans = *max_element(m.begin(), m.end());
}
