#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		string s; cin >> s;
		set<string> st;
		for(int i = 0; i < n-1; i++) {
			string a;
			a += s[i];
			a += s[i+1];
			st.insert(a);
		}
		cout << st.size() << endl;
	}
}
