#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		if(n % 4 == 0) {
			cout << "yEs\n";
			for(int i = 1; i <= n / 2; i++)
				cout << 2 * i << ' ';
			for(int i = 0; i < n / 2 - 1; i++)
				cout << 2 * i + 1 << ' ';
			cout << n + (n/2) - 1 << endl;
		} else {
			cout << "nO\n";
		}
	}
}
