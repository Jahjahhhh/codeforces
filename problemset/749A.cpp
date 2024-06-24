#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	int sum = n / 2;
	cout << (int)(n / 2) << endl;
	for(int i = 0; i < sum-1; i++)
		cout << '2' << ' ';
	if(n % 2 == 0)
		cout << '2';
	else
		cout << '3';
}
