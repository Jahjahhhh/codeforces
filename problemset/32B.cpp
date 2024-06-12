#include <iostream>
#include <string>

using namespace std;

int main() {
	string s; cin >> s;
	int len = s.length();
	for(int i = 0; i < len; i++) {
		if(s[i] == '-') {
			if(s[i+1] == '.') cout << '1';
			else if(s[i+1] == '-') cout << '2';
			i++;
		} else cout << '0';
	}
}
