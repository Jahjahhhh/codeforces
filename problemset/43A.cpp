#include <bits/stdc++.h>

using namespace std;

pair<string, int> find_max(map<string, int> mp) {
    pair<string, int> max_val = make_pair("", 0);
    map<string, int>::iterator curr_val;
    for(curr_val = mp.begin(); curr_val != mp.end(); curr_val++) {
        if(curr_val->second > max_val.second) {
            max_val = make_pair(curr_val->first, curr_val->second);
        }
    }
    return max_val;
}

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
    pair<string, int> ans = find_max(m);
    cout << ans.first;
}
