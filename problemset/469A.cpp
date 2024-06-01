#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int p; cin >> p;
	
	int level[n];
	for(int i = 0; i < n; i++)
		level[i] = 0;

	int a;
	while(p--) {
		cin >> a;
		level[a-1] = 1;
	}
	int q; cin >> q;
	while(q--) {
		cin >> a;
		level[a-1] = 1;
	}
	for(int i = 0; i < n; i++)
		if(level[i] == 0) {
			cout << "Oh, my keyboard!\n";
			return 0;
		}
	cout << "I become the guy.";
}
