#include <bits/stdc++.h>

using namespace std;

void decode() {
	int b;
	cin >> b;
	b -= 2;
	b /= 2;
	cout << (b * (b - 1)) / 2 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
