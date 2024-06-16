#include <iostream>

using namespace std;

bool isLikedByPolycarp(int n) {
	return (n % 3 != 0) && (n % 10 != 3);
}


int main() {
	int t; cin >> t;
	while(t--) {
		int k; cin >> k;
		int i = 0, n = 0;
		while(i < k) {
			n++;
			if(isLikedByPolycarp(n))
				i++;
		}
		cout << n << endl;
	}

	return 0;
}
