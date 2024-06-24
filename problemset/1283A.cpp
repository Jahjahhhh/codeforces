#include <bits/stdc++.h>

using namespace std;

#define TIME 1440

int main() {
	int t; cin >> t;
	int h, m;
	while(t--) {
		cin >> h >> m;
		cout << TIME - ((h * 60) + m) << endl;
	}
}
