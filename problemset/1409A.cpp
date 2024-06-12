#include <iostream>

using namespace std;

void print_moves(int d) {
	int m = 0;
	if(d >= 10) {
		m += d / 10;
		if(d % 10 > 0) m++;
	} else {
		m++;
	}
	cout << m << endl;
}

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
		int m = 0, d;
		cin >> a >> b;
		if(a > b) {
			d = a - b;
			print_moves(d);
		} else if(b > a) {
			d = b - a;
			print_moves(d);
		} else if(a == b) {
			cout << "0" << endl;
		}
	}
}
