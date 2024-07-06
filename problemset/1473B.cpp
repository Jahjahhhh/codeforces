#include <bits/stdc++.h>

using namespace std;

string solve(string a, int b){
	string result = "";
	while(b--)
	{
		result += a;
	}
	return result;
}

int main() {
	int q; cin >> q;
	string s, t;
	while(q--) {
		cin >> s >> t;
		int len = s.length(), len2 = t.length();
		int g = gcd(len, len2);
		if(solve(s, len2/g) == solve(t, len/ g))
			cout << solve(s, len2/g) << endl;
		else
			cout << -1 << endl;
	}
}
