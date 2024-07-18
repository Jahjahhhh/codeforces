#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;

		if(a >= x && b >= y) cout << "YES" << endl;
		else if(a >= x && b < y) (c+b) >= y ? cout << "YES" << endl : cout << "NO" << endl;
		else if(a < x && b >= y) (c+a) >= x ? cout << "YES" << endl : cout << "NO" << endl;
		else if(a < x && b < y) ((x-a)+(y-b)) <= c ? cout << "YES" << endl : cout << "NO" << endl;
	}
}
