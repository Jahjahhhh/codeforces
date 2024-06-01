#include <iostream>

using namespace std;

int main() {
	int s[4] = {0};
	int shoes = 0;
	for(int i = 0; i < 4; i++) {
		cin >> s[i];
		if(i != 0)
			for(int j = 0; j < i; j++)
				if(s[i] == s[j]) {
					shoes++;
					j = i;
				}
	}
	cout << shoes;
}
