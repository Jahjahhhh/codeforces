#include <iostream>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		int a, num_to_be_swapped = 0, even = 0, odd = 0;
		bool correct_parity = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			if(a % 2 != correct_parity) {
				num_to_be_swapped++;
				correct_parity ? even++ : odd++;
			}
			correct_parity = !correct_parity;
		}
		if(num_to_be_swapped % 2 == 0 && even == odd)
			cout << num_to_be_swapped / 2 << endl;
		else cout << "-1" << endl;
	}
}
