#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main() {
	int n, m;
	cin >> n >> m;
	while(!isPrime(++n));
	if(n == m)
		cout << "YES\n";
	else
		cout << "NO\n";

}
