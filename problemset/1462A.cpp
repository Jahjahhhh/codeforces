#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> a(n);
		for(auto &i : a) cin >> i;
		for(int i = 0, j = n - 1; i < n/2; ++i, --j)
			cout << a[i] << " " << a[j] << " ";

	  if(n % 2 != 0) cout << a[n / 2];

		cout << endl;
	}

}
