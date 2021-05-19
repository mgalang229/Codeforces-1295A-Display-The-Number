#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// the only digits that we will use are '1' and '7'
		// because using other segments would consists of 4 
		// or more segments ang using the digit '4' contains
		// 4 segments which is equivalent in using two 1's
		// since '1' contains 2 segments and having two 1's
		// would result to '11' which is a greater number (11 > 4)
		if (n % 2 == 1) {
			// use only '7' once because if we have more of these
			// it will decrease the number of digits in the result
			cout << 7;
			// subtract 3 from 'n' since 7 contains three segments
			n -= 3;
		}
		while (n > 0) {
			// use '1' for all the remaining segments ('n') to create
			// large number since '1' has the least segments to use
			cout << 1;
			// subtract 2 from 'n' since '1' contains two segments
			n -= 2;
		}
		cout << '\n';
	}
	return 0;
}
