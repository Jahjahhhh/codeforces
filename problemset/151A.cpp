#include <iostream>

using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np; // bruh
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int tot_l = k * l; // Total ml of drink
	int tot_c = c * d; // Total slices
	int t = (tot_l / nl) / n; // toasts per friend (drink)
	if((tot_c / n) < t)
		t = tot_c / n;
	if(((p / np) / n) < t)
		t = (p / np) / n;
	cout << t;
}
