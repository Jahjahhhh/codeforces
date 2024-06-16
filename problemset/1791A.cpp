#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	char c;
	while(t--) {
		cin >> c;
		switch(c) {
			case 'c': cout << "yes"; break;
			case 'o': cout << "yes"; break;
			case 'd': cout << "yes"; break;
			case 'e': cout << "yes"; break;
			case 'f': cout << "yes"; break;
			case 'r': cout << "yes"; break;
			case 's': cout << "yes"; break;
			default: cout << "no";
		} cout << endl;
	}
}
