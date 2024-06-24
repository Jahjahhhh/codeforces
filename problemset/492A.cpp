#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	int sum = n, thresh = 0;
	for(int i = 1; i <= n; i++) {
		thresh += i;
		if((sum-thresh) <= thresh + i) {
			cout << i << endl;
			break;
		}
		sum -= thresh;
		
	}
}
