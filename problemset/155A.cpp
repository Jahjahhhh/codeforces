#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int x; cin >> x; 
	int min, max, a = 0;
	min = max = x; n--;
	while(n--) {
		cin >> x;
		if(x > min && x > max) {
			a++;
			max = x;
		} else if(x < max && x < min) {
			a++;
			min = x;
		}
	}
	cout << a;
}
