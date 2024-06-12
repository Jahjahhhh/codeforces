#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if(n == 1) {
			cout << "yes" << endl;
			continue;
		}
		sort(a, a+n);
		vector<int> v;
		int r = 0;
		for(int i = 1; i < n; i++) {
			r = abs(a[i] - a[i-1]);
			v.push_back(r);
		}
		sort(v.begin(), v.end(), greater<int>());
		if(v[0] > 1)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
}
