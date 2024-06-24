#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	string s;
	int n;
	while(t--) {
		cin >> n >> s;
		bool fT = 0, fi = 0, fm =  0, fu = 0, fr = 0, once = 1;
		if(n != 5) {
			cout << "NO\n";
		} else {
			for(char c : s) {
				switch(c) {
					case 'T': fT ? once = 0 : fT = 1; break;
					case 'i': fi ? once = 0 : fi = 1; break;
					case 'm': fm ? once = 0 : fm = 1; break;
					case 'u': fu ? once = 0 : fu = 1; break;
					case 'r': fr ? once = 0 : fr = 1; break;
				}
			}
			if(fT && fi && fm && fu && fr && once)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}
