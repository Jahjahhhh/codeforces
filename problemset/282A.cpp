#include <iostream>
using namespace std;

int main(void) {
	int n;

	cin >> n;

	int x = 0;
	while(n--) {
		string s;
		cin >> s;
		(s[0] == '+' || s[2] == '+') ? x++ : x--;
	}
	cout << x;
}
