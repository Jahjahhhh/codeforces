#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		int moves = 0;
		if(a > b) {
			while(a != b) {
				if((a - b >= 1) && (a - b <= 10)) {
					a -= (a - b);
					moves++;
				} else {
					a -= (10 * (a / b));
					moves += (a / b);
				}
			}
		} else if(a < b) {
			while(a <= b) {
				if((b - a >= 1) && (b - a <= 10)) {
					a += (b - a);
					moves++;
				} else {
					a += (10 * (b / a));
					moves += (b / a);
					cout << a << " " << b << " " << moves << endl;
				}
			}
		}
		cout << moves << endl;
	}
}
