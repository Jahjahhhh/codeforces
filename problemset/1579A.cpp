#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	string s;
	while(t--) {
		cin >> s;
		int a = 0, b = 0, c = 0;
		for(char l : s) {
			switch(l) {
				case 'A': a++; break;
				case 'B': b++; break;
				case 'C': c++; break;
			}
		}
		if(a + c == b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
