#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	map<string, string> l;
	string a, b;
	for(int i = 0; i < m; i++) {
		cin >> a >> b;
		l.insert({a, b}); 
	}

	string lec[n];
	for(int i = 0; i < n; i++) cin >> lec[i];

	for(string &s : lec)
		s.length() > l[s].length() ? cout << l[s] << ' ' : cout << s << ' ';
}
