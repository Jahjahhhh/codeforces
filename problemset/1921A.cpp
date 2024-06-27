#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int a[4], b[4];
		for(int i = 0; i < 4; i++)
			cin >> a[i] >> b[i];

		int min_x = *min_element(a, a + 4);
		int max_x = *max_element(a, a + 4);
		int min_y = *min_element(b, b + 4);
		int max_y = *max_element(b, b + 4);

		int ans = (max_x - min_x) * (max_y - min_y);
		cout << ans << endl;
	}
}
