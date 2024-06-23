#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	int a, b, m = 0, c = 0;
	while(t--) {
		cin >> a >> b;
		if(a > b)
			m++;
		else if(a < b)
			c++;
	}
	if(m > c)
		cout << "Mishka";
	else if(c > m)
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";
}
