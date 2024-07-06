#include <bits/stdc++.h>
// tutorial
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, m, ans = 0;
	cin >> n >> m;
	double max = 0.0, x;
	for(int i = 1; i <= n; i++) {
		cin >> x;
		if(ceil(x/m) >= max){
			max = ceil(x/m);
			ans = i;
		}
	}
	cout << ans;
}
