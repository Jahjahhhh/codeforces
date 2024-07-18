#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) { // misnamed h1 and h2, wahtever
		int n; cin >> n;
		int h1, h2, h3;
		if(n % 3 == 0) {
			h1 = (n / 3), h2 = (n / 3) + 1, h3 = (n / 3) - 1;
			if(h3 == 0) {
				h3++;
				h1--;
			}
		} else if(n % 3 == 1) {
			h1 = (n / 3) + 1, h2 = (n / 3) + 2, h3 = (n / 3) - 2;
			if(h3 == 0) {
				h3++;
				h1--;
			}
		} else if(n % 3 == 2) {
			h1 = (n / 3) + 1, h2 = (n / 3) + 2, h3 = (n / 3) - 1;
			if(h3 == 0) {
				h3++;
				h1--;
			}
		}
		cout << h1 << ' ' << h2 << ' ' << h3 << endl;
	}
}
