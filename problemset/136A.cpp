#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int p[n];
	int o[n];
	for(int i = 0; i < n; i++) {
		cin >> p[i];
		o[p[i]-1] = i+1;
	}
	for(int i = 0; i < n; i++) {
		cout << o[i];
		if(i < n-1) cout << " ";
	}
}
