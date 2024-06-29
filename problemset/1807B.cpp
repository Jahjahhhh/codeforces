#include <iostream>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n, sum = 0, odd = 0; cin >> n;
		for(int i = 0; i < n; ++i)
		{
			long long x; cin >> x;
			if(x % 2 == 0) sum += x;
			else odd += x;
		}

		if(sum > odd) cout << "YES\n";
		else cout << "NO\n";
	}
}
