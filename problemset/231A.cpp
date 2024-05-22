#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	bool p, v, t;
	int num, count = 0;
	while(n--) {
		cin >> p >> v >> t;
		num = p + v + t;
		if(num >= 2) count++;
	}
	cout << count;
}

