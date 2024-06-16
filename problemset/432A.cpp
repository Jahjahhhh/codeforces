#include <iostream>

using namespace std;

int main() {
	int n, k, s = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		if(k + x <= 5)
			s++;
	}
	cout << s / 3 << endl;
}
