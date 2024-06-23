#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	int a, b, c, x, y, z;
	while(t--) {
		cin >> a >> b >> c;
		x = a + b;
		y = b + c;
		z = a + c;
		if(x >= 10 || y >= 10 || z >= 10)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
