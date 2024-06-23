#include <iostream>
#include <string>

using namespace std;

int main() {
	int t; cin >> t;
	string s;
	while(t--) {
		cin >> s;
		if(s == "abc" || s == "acb" || s == "bac" || s == "cba")
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
