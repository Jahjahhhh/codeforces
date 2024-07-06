#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);

	int n; cin >> n;
	int w[7];
	for(int &i : w) cin >> i;
	int day = 0, ans;
	while(n > 0) {
		n -= w[day];
		ans = day;
		day++;
		if(day > 6) day = 0;
	}
	cout << ans + 1;
}
