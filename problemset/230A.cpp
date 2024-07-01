#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> a;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a.emplace_back(x, y);
    }
    sort(a.begin(), a.end());
    bool f = 1;
    for (const auto &p : a) {
        int x = p.first, y = p.second;
        if(s > x) {
            s += y;
        } else {
            f = 0;
            break;
        }
    }
    f ? cout << "YES" : cout << "NO";
}
