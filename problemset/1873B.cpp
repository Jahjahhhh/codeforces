#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		int a[n], sum = 1;
		for(int& i : a)
			cin >> i;
		auto min_it = min_element(a, a + n);
		if(min_it != a + n) (*min_it)++;
		for(int i : a)
			sum *= i;
		cout << sum << endl;
	}
}
