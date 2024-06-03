#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
		int n, count = 0;
		cin >> n;
		int m = n;
		while(m) {
			if(m % 10 != 0)
			count++;
			m /= 10;
		}
		cout << count << endl;
		m = n;
		int i = 0;
		while(m) {
			if(m % 10 != 0)
				cout << (m % 10) * pow(10, i) << " ";
			m /= 10;
			i++;
		}
		cout << endl;
	}
}

