#include <iostream>
#include <string>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		string s;
		cin >> s;
		((s[0]+s[1]+s[2]-144) == (s[3]+s[4]+s[5]-144)) ? cout << "YES\n" : cout << "NO\n";
	} // '0' * 3 = 144
}
