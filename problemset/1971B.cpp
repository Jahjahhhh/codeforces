#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		string s1; cin >> s1;
		string s2 = s1;
		size_t n = s1.length();

		if(n == 1) {
			cout << "NO" << endl;
			continue;
		}
		
		next_permutation(s1.begin(), s1.end());

		s1 != s2 ? cout << "YES" << endl << s1 << endl : cout << "NO" << endl;
	}
}
