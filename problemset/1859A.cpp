#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	vector<int> a(n);
	set<int> s;
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	    s.insert(a[i]);
	}
	if(s.size() < 2) {
	    cout << -1 << endl;
	} else {
	    sort(a.begin(), a.end());
	    int i = 1;
	    while(a[i] == a[i-1] && i < n) {
		i++;
	    }
	    cout << i << ' ' << n - i << endl;
	    for(int j = 0; j < i; j++) cout << a[0] << ' ';
	    cout << endl;
	    for(; i < n; i++) cout << a[i] << ' ';
	    cout << endl;
	}
    }
}
