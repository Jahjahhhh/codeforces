#include <iostream>
#include <string>

using namespace std;

int main() {
	string x; cin >> x;	
	string y; cin >> y;	
	string z; cin >> z;	
	string xy = x + y;

	if(x.length() + y.length() != z.length()) {
		cout << "NO"; return 0;
	}

	int alpha_set[26] = {0};
	for(int i = 0; i < 26; i++){
		for(char &c : xy) {
			alpha_set[c - 'A']++;
		}
	}
	int alpha_set2[26] = {0};
	for(int i = 0; i < 26; i++){
		for(char &c : z) {
			alpha_set2[c - 'A']++;
		}
	}
	for(int i = 0; i < 26; i++){
		if(alpha_set[i] != alpha_set2[i]) {
			cout << "NO"; return 0;
		}
	}
	cout << "YES";
}
