#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int prev = 0, m, groups = 0;
	while(n--) {
		cin >> m;
		if(m != prev)
			groups++;
		prev = m;
	}
	cout << groups;
}
