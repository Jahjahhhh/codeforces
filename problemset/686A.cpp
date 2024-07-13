#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	long long n, x, d;
	cin >> n >> x;
	char c;
	long long icpl = 0, dk = 0;
	while(n--) {
		cin >> c >> d;
		if(c == '-') {
			if((x - d) < 0) {
				dk++;
			} else {
				x -= d;
			}
		} else {
			x += d;
		}
	}
	cout << x << ' ' << dk;
}
