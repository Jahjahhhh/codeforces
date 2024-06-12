#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int r; cin >> r;
		if(r >= 1900)	   r = 1;
		else if(r >= 1600) r = 2;
		else if(r >= 1400) r = 3;
		else			   r = 4;
		cout << "Division " << r << endl;
	} // We do a little bit of recycling...
}
