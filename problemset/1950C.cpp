#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	string s;
	while(t--) {
		cin >> s;
		if(s[0] == '0' && s[1] == '0') {
			s[0] = '1';
			s[1] = '2';
			s += " AM"; 
		} else if(s[0] == '0' || ((s[0] == '1') && (s[1] <= '1'))) {
			s += " AM";
		} else if(s[0] == '1' && s[1] == '2') {
			s += " PM";
		} else {
			int x = (((s[0] - '0') * 10) + (s[1] - '0')) - 12;
			s[0] = (x/10) + '0';
			s[1] = (x % 10) + '0';
			s += " PM";
		}
		cout << s << endl;
	}
}
