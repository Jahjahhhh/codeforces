#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		bool b;
		cin >> b;
		if(b) {
			cout << "HARD";
			return 0;
		}
	}
	cout << "EASY";
}
