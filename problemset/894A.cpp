#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int q = 0, qa = 0, qaq = 0;
	string s; cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'Q') {
			q++;
			qaq += qa;
		} else if(s[i] == 'A')
			qa += q;
	}
	cout << qaq << endl;
}
