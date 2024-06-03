#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int x, p = 0, u = 0;
	while(n--) {
		cin >> x;
		p += x;
		if(p < 0 && x < 0) {
			u++;
			p = 0;
		}
	}
	cout << u;
}
