#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int sum = 0, optimal_sum = 0, optimal_multiple = 0;
		for(int i = 2; i <= n; i++) {
			int sum = 0;
			for(int j = 1; (j * i) <= n; j++) {
				sum += i * j;
			}
			if(optimal_sum < sum) {
				optimal_sum = sum; 
				optimal_multiple = i;
			}
		}
		cout << optimal_multiple << endl;
	}
}
