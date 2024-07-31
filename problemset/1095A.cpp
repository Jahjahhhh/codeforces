#include <bits/stdc++.h>

using namespace std;
// tutorial
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    string s; cin >> s;

    int i = 0;
    int gap = 1;
    while(i < n) cout << s[i], i += gap, gap++;
}
