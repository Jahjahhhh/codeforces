#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
	int n; cin >> n;
	vector<int> a(n);
	int sum = 0, avg = 0;
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	    sum += a[i];
	}
	if(n == 1) {
	    cout << 0 << endl;
	    continue;
	}
	int excess = 0, missing = 0, need = 0;
	if(sum % n == 0) {
	    avg = sum / n;
	    for(int i = 0; i < n; i++) {
		if(a[i] > avg) excess += a[i] - avg;
		else if(a[i] < avg) missing += avg - a[i];
	    }
	    if(missing == 0) {
		cout << 0 << endl;
		continue;
	    }
	    int ans = 0;
	    if(missing == excess) {
		sort(a.rbegin(), a.rend());
		for(int i = 0; i < n; i++) {
		    missing -= (a[i] - avg);
		    ans++;
		    if(missing <= 0) break;
		}
		cout << ans << endl;
	    } else cout << -1 << endl;
	} else {
	    cout << -1 << endl;
	}
    }
}
