#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n; cin >> n;
	int p;
	double d = 0.0;
	for(int i = 0; i < n; i++) {
		cin >> p;
		d += (p/100.0);
	}
	cout << fixed << setprecision(12) << (d*100) / n;
}
