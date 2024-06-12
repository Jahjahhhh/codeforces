#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int min_burles = 0, max;
	max = *max_element(a, a+n);
	for(int w : a)
		min_burles += max - w;
	cout << min_burles << endl;
}
