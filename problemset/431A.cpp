#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	string s; cin >> s;
	int cal = 0;
	for(char x : s) {
		switch(x - '0') {
			case 1: cal += a; break;
			case 2: cal += b; break;
			case 3: cal += c; break;
			case 4: cal += d; break;
		}
	}
	cout << cal;
}
