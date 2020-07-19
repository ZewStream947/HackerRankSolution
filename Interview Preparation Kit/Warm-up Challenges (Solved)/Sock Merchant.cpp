#include <iostream>
#include <array>

using namespace std;

const int maxn = 101;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n, x, count = 0;
	array<bool, maxn> ar;
	ar.fill(false);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (ar[x]) {
			ar[x] = false;
			++count;
		} else {ar[x] = true;}
	}	
	cout << count;
	return 0;
}