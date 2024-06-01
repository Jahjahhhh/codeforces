#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	
	transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return tolower(c); });

	bool pangram[26] = {0}; // alphabet
	for(char &c : s)
		pangram[c - 'a'] = 1;

	for(bool b : pangram)
		if(b == 0) {
			cout << "NO";
			return 0;
		}
	cout << "YES";
}
