#include <bits/stdc++.h>

using namespace std;

#define L 26

int main() {
	string s; cin >> s;
	int d = 0;
	s.insert(0, 1, 'a');
	for(int i = 0; i < s.length() - 1; i++)
		d += min(abs(s[i] - s[i+1]), (L - abs(s[i] - s[i+1])));
	cout << d << endl;
}
