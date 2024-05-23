#include <iostream>

using namespace std;

int main() {
	int n, h;
	cin >> n >> h;

	int a, w = 0;
	while(n--) {
		cin >> a;
		a > h ? w+=2 : w++;
	}
	cout << w;
}
