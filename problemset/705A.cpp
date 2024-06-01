#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		if(i < n) {
			switch(i % 2) {
				case 0: cout << "I hate";
						if(n - (i+1))
							cout << " that ";
						else cout << " it"; break;
				case 1: cout << "I love";
						if(n - (i+1))
							cout << " that ";
						else cout << " it"; break;
			}
		}
	}
}
