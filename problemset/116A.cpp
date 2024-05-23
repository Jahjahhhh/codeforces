#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a, b;
	int capacity = 0, biggest_capacity = 0;
	while(n--) {
		cin >> a >> b;
		capacity -= a;
		capacity += b;
		if(capacity > biggest_capacity)
			biggest_capacity = capacity;
	}
	cout << biggest_capacity;
}
