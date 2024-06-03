#include <iostream>

using namespace std;

int main() {
	int k, r;
	cin >> k >> r;
	int sum = 0, shovels = 1;
	while(1) {
		sum += k;
		if(sum % 10 == 0 || sum % 10 == r) {
			cout << shovels;
			return 0;
		}
		shovels++;
	}
	cout << shovels;
	return 0;
}
