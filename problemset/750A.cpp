#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k; 
	int t = 240 - k;
	int p = 0;
	for(int i = 1; i <= n; i++) {
		if(t - (5*i) >= 0) {
			p++;
			t -= 5 * i;
		}
	}
	cout << p;
}
