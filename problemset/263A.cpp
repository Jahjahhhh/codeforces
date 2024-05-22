#include <iostream>

using namespace std;

int main() {
	bool m[5][5];
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> m[i][j];
			if(m[i][j] == 1) {
				cout << (abs(i - 2) + abs(j - 2));
				return 0;
			}
		}
	}
}
