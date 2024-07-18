#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int a, b; cin >> a >> b;
	int ans = 1;
	for(int i = 1; i <= min(a, b); i++) ans *= i;
	cout << ans;
}
