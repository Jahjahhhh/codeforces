#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
	int n; cin >> n;
	int s1 = 4, s2 = n - 4;
	while(is_prime(s1) || is_prime(s2)) {
		s1++;
		s2--;
	}
	cout << s1 << ' ' << s2;
}
