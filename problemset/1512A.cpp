#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];

		int spy;
		for(int i = 1; i < n; i++)
			if(a[i] != a[0])
				spy = i;

		if((spy + 1 == n) && (a[0] != a[1]))	  cout << "1" << endl;
		else if((spy + 1 == n) && (a[0] == a[1])) cout << n << endl;
		else                                      cout << spy + 1 << endl;
	}
}
