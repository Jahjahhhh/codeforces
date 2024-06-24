#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c, t; cin >> t;
	while(t--) {
		cin >> a >> b >> c;
		if(c > b && b > a)
			cout << "STAIR\n";
		else if(b > a && b > c)
			cout << "PEAK\n";
		else
			cout << "NONE\n";
	}
}
