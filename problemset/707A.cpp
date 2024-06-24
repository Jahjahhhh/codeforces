#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	bool has_color = 0;
	char col;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> col;
			switch(col) {
				case 'C': has_color = 1; break;
				case 'M': has_color = 1; break;
				case 'Y': has_color = 1;
			}
			if(has_color) {
				cout << "#Color\n";
				return 0;
			}
		}
	}
	if(!has_color)
		cout << "#Black&White\n";
}
