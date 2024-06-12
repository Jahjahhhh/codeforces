#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	int a, b, c, d, r;
	while(t--) {
		r = 0;
		cin >> a >> b >> c >> d;
		if(a < b)
			r++;
		if(a < c)
			r++;
		if(a < d)
			r++;
		cout << r << endl;
	}
}
