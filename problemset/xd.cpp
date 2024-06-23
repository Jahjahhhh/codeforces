#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<vector<int>> grid = {{0,1,0},{1,0,1}};
	int max_j = 0, h = 0, j;
	for(int i = grid.size() - 1; i >= 0; i--) {
		for(j = grid[i].size() - 1; j >= 0; j--) {
			cout << j << endl;
			if(grid[i][j] && j > max_j) {
				max_j = j;
				h++;
			}
		}
	}
	cout << h << ' ' << max_j + 1 << endl;
	cout << h * max_j+1;
}
