#include <iostream>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	char arr[n][m];
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0)
			for(int j = 0; j < m; j++)
				arr[i][j] = '#';
		else {
			if(count % 2 == 0) {
				for(int j = 0; j < m-1; j++)
					arr[i][j] = '.';
				arr[i][m-1] = '#';
			} else {
				for(int j = 1; j < m; j++)
					arr[i][j] = '.';
				arr[i][0] = '#';
			}
			count++;
		}
		for(int j = 0; j < m; j++)
			cout << arr[i][j];
		cout << endl;
	}
}
