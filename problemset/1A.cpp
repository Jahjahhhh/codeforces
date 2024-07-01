#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	ll n, m, a;
	cin >> n >> m >> a;
	ll sum1 = 0, sum2 = 0;
	sum1 = n / a;
	if(n % a != 0) sum1++;
	sum2 = m / a;
	if(m % a != 0) sum2++;
	cout << sum1 * sum2 << endl;
}
