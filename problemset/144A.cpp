#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	
	int line[n]; int a;
	for(int i = 0; i < n; i++) {
		cin >> a;
		line[i] = a;
	}
	
	int min = 0, max = 0;
	for(int i = 0; i < n; i++) {
		if(line[i] <= line[min]) min = i;
		if(line[i] > line[max]) max = i;
	}
	if(min == n && max == 0) {
		cout << "0";
		return 0;
	}
	if(min > max) {
		cout << max + (n - 1) - min;
	} else cout << max + (n - 1) - min - 1;
}
