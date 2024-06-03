#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t; cin >> t;

	int n;
	while(t--) {
		cin >> n;
		if(n == 1 || n == 2) {
			cout << "0";
		} else n % 2 == 0 ? cout << (n/2)-1 : cout << (n/2);
		cout << endl;
	}
}
