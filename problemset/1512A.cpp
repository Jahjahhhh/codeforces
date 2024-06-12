#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		
		for(int i = 0; i < n; i++)
			cin >> a[i];
		
		int spy, fc = 0, sc = 0;
		for(int i = 0; i < n; i++) {
			if(i == 0) {
				spy = i;
			} else {
				if(a[i] == a[spy]) {
					fc++;
				} else {
					sc++;
					spy = i;
				}
			}
			if(fc >= 2 && sc == 1) {
				
			} else if(sc >= 2 && fc == 1) {

			}
		}
	}
}
