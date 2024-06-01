#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int o = 0, f = 0, ten = 0, tw = 0, h = 0;
	while(n) {
		if(n >= 100) {
			h = n / 100;
			n -= h * 100;
		} else if(n >= 20) {
			tw += n / 20;
			n -= tw * 20;
		} else if(n >= 10) {
			ten += n / 10;
			n -= ten * 10;
		} else if(n >= 5) {
			f += n / 5;
			n -= f * 5;
		} else {
			o++;
			n--;
		}
	}
	cout << o + f + ten + tw + h;
}
