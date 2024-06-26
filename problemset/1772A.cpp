#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	char a, b, c;
	while(t--) {
		cin >> a >> b >> c;
		cout << a - '0' + c - '0' << endl;
	}
}
